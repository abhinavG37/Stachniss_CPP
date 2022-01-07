#include <filesystem>
#include "opencv2/core/core.hpp"
#include <opencv2/opencv.hpp>
# include "opencv2/highgui.hpp"
#include <opencv2/features2d.hpp>
#include "homework_5.h"
#include <iostream>
namespace fs = std::filesystem;
void ipb::serialization::sifts::ConvertDataset(const std::filesystem::path &img_path) {
  int minHessian = 400;
  cv::Ptr<cv::SIFT> detector = cv::SIFT::create(minHessian);
//img_path is path to folder containing image dataset
  for (auto& entry : fs::directory_iterator(img_path)) {
    fs::path path = entry.path();
    if (path.filename().extension() == ".png"){
      std::cout<<path<<std::endl; //Provides absolute path to all files in directory
      cv::Mat image_png = cv::imread(path, cv::IMREAD_GRAYSCALE);
      std::vector<cv::KeyPoint> keypoints;
      detector->detect(image_png, keypoints);
      cv::Mat output_keypoints;
      cv::drawKeypoints(image_png, keypoints, output_keypoints);

        std::string filename = path.stem();
        std::cout<<path<<std::endl;
        std::cout<<path.parent_path().parent_path()<<std::endl;

        ipb::serialization::Serialize(output_keypoints, path); //path is the exact path till the image
//      Mat output_keypoints_Deserialized = ipb::serialization::Deserialize(filename);

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
      cv::imshow(entry.path().filename(), output_keypoints_Deserialized);
      cv::waitKey(0);
    }

  }
  return keypoints_Vec;
}