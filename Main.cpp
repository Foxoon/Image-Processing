// ConsoleOpenCV-Try2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<opencv2/opencv.hpp>
#include<iostream>
#include "Classes/Editing.h"
#include "Classes/ConnectedComponent.h"

int main()
{
	cv::Mat img = cv::imread("Ressources/camera.png", false);

	cv::namedWindow("input", cv::WINDOW_NORMAL);
	imshow("input",img);

	cv::Mat ot = thresholdOtsu(img);
	cv::namedWindow("Threshold Otsu", cv::WINDOW_NORMAL);
	imshow("Threshold Otsu", ot);



	cv::waitKey(0);
	return 0;
}

