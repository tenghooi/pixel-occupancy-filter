#include <iostream>  
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include "pixel.h"
#include "utils.h"
                   
int main(int argc, char** argv)
{           
    // std::string image_path {cv::samples::findFile("../test_images/g.png")};
    // cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);

    // if (img.empty())
    // {
    //     std::cout << "Could not read the image: " << image_path <<std::endl;
    //     return 1;
    // }

    // cv::imshow("Display Window", img);
    // int k = cv::waitKey(0);

    pixofil::Pixel pix;

    std::cout << "Pixel log odds:" << pix.get_log_odds() << std::endl;
    std::cout << "Pixel occupancy: " << pix.get_occupancy() << std::endl;

    double prob {0.75};
    double logit_p {pixofil::logit(prob)};
    std::cout << "posterior log odds:" << logit_p << std::endl;

    pixofil::log_odds_update(pix, logit_p);

    std::cout << "Pixel new log odds:" << pix.get_log_odds() << std::endl;
    std::cout << "Pixel occupancy: " << pix.get_occupancy() << std::endl;

    return 0;
}

