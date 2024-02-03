#include <iostream>  
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
                   
int main(int argc, char** argv)
{           
    std::string image_path {cv::samples::findFile("../test_images/g.png")};
    cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);

    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path <<std::endl;
        return 1;
    }

    cv::imshow("Display Window", img);
    int k = cv::waitKey(0);

    return 0;
}

