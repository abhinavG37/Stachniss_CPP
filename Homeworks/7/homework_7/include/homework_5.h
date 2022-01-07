

// @file      serialize.hpp
// @author    Ignacio Vizzo     [ivizzo@uni-bonn.de]
//
// Copyright (c) 2020 Ignacio Vizzo, all rights reserved
#ifndef SERIALIZE_HPP_
#define SERIALIZE_HPP_

#include <string>
#include <opencv2/core/mat.hpp>

namespace ipb::serialization {

/**
 * @brief Writes the input cv::Mat(Image, SIFT, etc) to a binary file
 *
 * @param m        The input cv::Mat you want to serialize.
 * @param filename The filename of the file where the cv::Mat will be written.
 */
void Serialize(const cv::Mat& m, const std::string& filepath);

/**
 * @brief Reads a binary file representing a cv::Mat type and outputs the
 * content of this file into a new cv::Mat
 *
 * @param filename The binary file you want to read
 * @return cv::Mat The cv::Mat created from the binary file
 */
cv::Mat Deserialize(const std::string& filepath);

}  // namespace ipb::serialization

#endif  // SERIALIZE_HPP_

#ifndef CONVERT_DATASET_HPP_
#define CONVERT_DATASET_HPP_

#include <filesystem>
#include "opencv2/core/core.hpp"
# include "opencv2/opencv_modules.hpp"
# include "opencv2/highgui/highgui.hpp"
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/features2d.hpp>

namespace ipb::serialization::sifts {
/**
 * @brief This helper function reads all the png files from a given path,
 * compute the SIFT descriptors for each of them, and saves the results to a
 * binary file. You can see this function as a "dataset" converter, it basically
 * converts a set of png image files to a SIFT representation of the image and
 * save the descriptors to the filesystem. You MUST write the descriptors use
 * the same filename of each image, but instead of using a '.png' extension you
 * must use a '.bin' extension
 *
 * It MUST store the binary files on the same parent directory where the images
 * are located but inside a `bin/` subfolder. Basically, after calling this
 * function with "data/freiburg/images/" as input path the results should be
 * stored in "data/freiburg/bin/""
 *
 * @param img_path The path where the png image files are located.
 */
void ConvertDataset(const std::filesystem::path& img_path);

/**
 * @brief This helper function will allow you to read from a binary-like dataset
 * of SIFT descriptors and load the data into a container. This utility might be
 * used after creating this so called 'binary dataset' that basically holds all
 * the feature descriptors from a given dataset of images.
 *
 * @param bin_path Where the '.bin' files are located
 * @return std::vector<cv::Mat> Containing all the SIFT features from the input
 * binary dataset.
 */
std::vector<cv::Mat> LoadDataset(const std::filesystem::path& bin_path);

}  // namespace ipb::serialization::sifts

#endif  // CONVERT_DATASET_HPP_

