#include <iostream>
#include <string>
#include <opencv4/opencv2/opencv.hpp>
// #include <opencv2/core.hpp>

int main(){
    std::cout<<"Hello world" <<std::endl;

    cv::Mat image = cv::imread("12771.jpg", cv::IMREAD_COLOR);
    if(image.empty()){
        std::cerr <<"Image Not Found \n";
        return 1;
    }
    const std::string window_name("Wallpaper Viewer");
    cv::namedWindow(window_name);
    cv::imshow(window_name, image);
    cv::waitKey(20000);
    // else{
    //     cv::imshow(image);
    // }
    return 0;
}