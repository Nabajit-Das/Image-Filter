#include<iostream>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgcodecs.hpp>

using namespace std;
using namespace cv;

Mat img, imgGray, imgBlur,imgSharp;
int Sx, Sy, x, y;
int main(){
	string path;
	cout << "\n\t Warning !! Use '/' instead of '\\'";
	cout << "\n\tEnter the path of your image to be processed : ";
	cin >> path;
	img=imread(path);
	imgGray;
	resize(img, img, Size(), 0.3, 0.3,INTER_AREA);
	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	imgBlur;
	namedWindow("TrackBars", (640, 480));
	Mat kernel = (Mat_<double>(3, 3) << -1,-1,-1,-1,9,-1,-1,-1,-1);
	filter2D(img, imgSharp, -1, kernel);
	createTrackbar("Sx", "TrackBars", &Sx, 10);
	setTrackbarMin("Sx", "TrackBars", 1);
	createTrackbar("Sy", "TrackBars", &Sy, 10);
	setTrackbarMin("Sy", "TrackBars", 1);
	createTrackbar("x", "TrackBars", &x, 10);
	createTrackbar("y", "TrackBars", &y, 10);
	while (true) {

		imshow("Original Image", img);
		imshow("Sharp Image", imgSharp);
		imshow("Gray Scale Image", imgGray);
		if (Sx % 2 == 0) Sx++;
		if (Sy % 2 == 0) Sy++;
		GaussianBlur(img, imgBlur, Size(Sx, Sy), x, y);
		imshow("Blur Image", imgBlur);
		waitKey(1);
	}
	return 0;
}
