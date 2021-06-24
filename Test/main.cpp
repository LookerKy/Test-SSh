//
//  main.cpp
//  Test
//
//  Created by 이규영 on 2020/09/02.
//  Copyright © 2020 Inopartners. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <opencv2/highgui.hpp>

int main(int argc, const char * argv[]) {
   cv::Mat image(300, 400, CV_8UC1, cv::Scalar(200));
   cv::imshow("영상보기", image);
   cv::waitKey(0);
     
    return 0;
}
