


#include<iostream>
#include<opencv2/imgproc.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
	string path = "E:\BRO.mkv";
	VideoCapture cap (path);
	Mat img;
	while (true) {
		cap.read(img);
		imshow("Video", img);
		waitKey(1);
	}
	return 0;
}

