#include<iostream>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
	//image display
	string path = "C:/Users/nabaj/OneDrive/Pictures/20211219_211120.jpg";
	Mat img = imread(path);
	resize(img, img, Size(520, 480));
	Mat imgGray=imread(path, IMREAD_GRAYSCALE);
	resize(imgGray, imgGray, Size(520, 480));
	imshow("Image GrayScale", imgGray);
	imshow("Image", img);
	Mat imgBlur;
	GaussianBlur(img, imgBlur, Size(7, 7), 0, 0);
	imshow("Blur Image", imgBlur);
	waitKey(0);




	return 0;
}