# Stachniss_Homework5_Self

Creates 2 libraries in build/bin/: libSerializer.a and libconvert_dataset.a
Collective utility of project is to serialize SIFT descriptors from a set of .png images in data/freiburg/images/ and store them in data/freiburg/bin/
and eventually read them through the load dataset functionality present in code.

Part of Homework_5 tasks: 1 & 2


* Functionality found under <opencv4/features2d.hpp> and <opencv4/xfeatures2d.hpp>
* xfeatures2d is non-free version of some descriptors. 
* cv::SIFT::create() is used to initialize the detector
* detector.detect() does not work | detector->detect() is used


* cv::Feature2D class has a member function compute() which can generate descriptors for the keypoints found by the detector
  * This could **not** be directly accessed for some reason. 
* Found a CV_wrapper in the same features2d.hpp: `detectAndCompute()` which simplifies the above step and makes it work.
  * Utilized this example with appropriate substitutions for SIFT:  
    * **https://docs.opencv.org/3.4/d5/dde/tutorial_feature_description.html*
* `imshow()` with a keypress is added to show the overlayed keypoints for every image before serializing the descriptors, can be disabled for larger datasets.


