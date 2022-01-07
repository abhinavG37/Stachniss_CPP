//
// Created by abhinav137 on 24/06/21.
//

#ifndef HOMEWORK_6_IMAGE_H
#define HOMEWORK_6_IMAGE_H

#include <io_tools.hpp>
#include <opencv2/core/core.hpp>
namespace igg {
    class Image {
      private:
        int rows_{};
        int cols_{};
        std::vector<uint8_t> downScaledData_;
        std::vector<uint8_t> upScaledData_;
        std::vector<uint8_t> data_;
        //data_ is supposed to be a vector which contains rowwise elements into it
        //Change this later but implement a vector to store rowwise data in both constructors
      public:
        Image();
        Image(int rows, int cols);
        [[nodiscard]] int rows() const;
        [[nodiscard]] int cols() const;
        uint8_t& at(int row, int col);
        [[nodiscard]] int calc_grid_index(int row, int col) const;
        [[nodiscard]] std::tuple<int, int> calc_xy_index(int index) const;
        bool FillFromPgm(const std::string& filename);
        void WriteToPgm(const std::string& filename);
        [[nodiscard]] std::vector<ulong> ComputeHistogram(int bins) const;
        void UpScale(int scale);
        void DownScale(int scale);
    };
}
#endif // HOMEWORK_6_IMAGE_H
