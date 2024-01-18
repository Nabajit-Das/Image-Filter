#include<iostream>
#include<opencv2/imgproc.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
	VideoCapture cap(0);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("Webcam", img);
		waitKey(1);
	}
	return 0;
}