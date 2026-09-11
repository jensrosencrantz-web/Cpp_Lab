#include <iostream>
#include <opencv2/opencv.hpp>

int main () 
{
   //cv::VideoCapture video("resources/camera_test_fixed.mp4");

    cv::VideoCapture video(0); // Open the default camera (camera index 0)
    if (!video.isOpened())
    {
        std::cout << "Error opening video stream or file" << std::endl;
        return -1;
    }

    cv::Mat frame;

    while (video.read(frame))
    {
        cv::imshow("OpenCV video test", frame);
        if(cv::waitKey(20) == 27) // wait for 'esc' key press for 20 ms. If 'esc' key is pressed, break loop
        {
            break; 
        }
        
    }
    
    return 0;
}