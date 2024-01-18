#include<iostream>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
	//image display
	string path = "C:/Users/nabaj/OneDrive/Pictures/trials wallpaper.jpg";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0);
	
	


	return 0;
}
