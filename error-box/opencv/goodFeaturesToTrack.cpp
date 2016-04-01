#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
int main(int argc, char** argv)
{
    if(argc < 2)
        return -1;
    cv::Mat image1 = cv::imread(argv[1], 0);
    cv::cvtColor(image1,image1,CV_BGR2GRAY);
  //  cv::cvtColor(image2,image2,CV_RGB2GRAY);,
    std::vector<cv::Point2f> corners;
 //   cv::Mat corners; 编译通过, 但是调用imshow出错
 //   cv::Mat corners(image1.size(),CV_32FC1,cv::Scalar(0)); 编译通过, 但是调用imshow出错
    cv::goodFeaturesToTrack(image1,corners,500,0.01,10);
//    cv::Mat corner(1,image1.size().width *image1.size().height,CV_32FC1);
//    corners.copyTo(corner);
//    corners.reshape(1,image1.size().height); 编译通过, 但是调用imshow出错
    cv::Mat corner(image1.size(), CV_32FC1,cv::Scalar(255));
    for (auto a : corners)
        corner.at<uchar>(a) = 0;
    cv::namedWindow("corner",1);
    cv::namedWindow("image",1);
    cv::imshow("image",image1);
    cv::imshow("corner",corner);
    cv::waitKey(0);

}
