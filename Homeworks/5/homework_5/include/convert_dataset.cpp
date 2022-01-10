#include <filesystem>
#include "opencv2/core/core.hpp"
#include <opencv2/opencv.hpp>
# include "opencv2/highgui.hpp"
#include <opencv2/xfeatures2d.hpp>
#include <opencv2/features2d.hpp>
#include "homework_5.h"
#include <iostream>



#define N_FEATURES 4000

//-----https://docs.opencv.org/3.4/d5/dde/tutorial_feature_description.html-----//


namespace fs = std::filesystem;
void ipb::serialization::sifts::ConvertDataset(const std::filesystem::path &img_path) {
  cv::Ptr<cv::SIFT> detector = cv::SIFT::create(N_FEATURES);
//img_path is path to folder containing image dataset
  for (auto& entry : fs::directory_iterator(img_path)) {
    fs::path path = entry.path();
    if (path.filename().extension() == ".png"){
        cv::Mat image_png = cv::imread(path, cv::IMREAD_GRAYSCALE);
        std::vector<cv::KeyPoint>keypoints;
        cv::Mat computed_descriptors;
        cv::Mat keypoint_overlay;
        cv::Feature2D descriptor_object;

        //==========https://docs.opencv.org/3.4/d5/dde/tutorial_feature_description.html============//
        detector->detectAndCompute(image_png, cv::noArray(), keypoints, computed_descriptors);
        cv::drawKeypoints(image_png, keypoints, keypoint_overlay);

        cv::imshow(img_path.filename(), keypoint_overlay);
        cv::waitKey(0);

        std::cout<<"ABSOLUTE PATH:\t"<<path<<std::endl; //Provides absolute path to all files in directory
        std::string filename = path.stem();
        std::cout<<path<<std::endl;
        std::cout<<path.parent_path().parent_path()<<std::endl;

        /*
            * Used documentation of features2D.hpp->Feature2D class (non-static)
            * descriptor_object needed to access non-static Feature2D->compute function
            * to generate descriptor vector
            *
        */
//        detector->detect(image_png, keypoints)
//        cv::drawKeypoints(image_png, keypoints, output_image);
        //        descriptor_object.compute(image_png, keypoints, computed_descriptors);
        //        ipb::serialization::Serialize(output_image, path); //path is the exact path till the image
        ipb::serialization::Serialize(computed_descriptors, path); //path is the exact path till the image
    }
  }
}

std::vector<cv::Mat> ipb::serialization::sifts::LoadDataset(const std::filesystem::path &bin_path) {
  std::vector<cv::Mat> keypoints_Vec;
  for (const auto &entry : fs::directory_iterator(bin_path)) {
    if (entry.path().extension() == ".bin") {
      std::cout << entry << std::endl;
      cv::Mat output_keypoints_Deserialized = ipb::serialization::Deserialize(entry.path());
      keypoints_Vec.push_back(output_keypoints_Deserialized);
//      cv::imshow(entry.path().filename(), output_keypoints_Deserialized);
//      cv::waitKey(0);
    }

  }
  return keypoints_Vec;
}