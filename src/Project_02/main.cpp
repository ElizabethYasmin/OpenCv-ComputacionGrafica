#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

int main(){
	// initialize a video capture object
	VideoCapture vid_capture("/home/elizabeth/Documents/CG/Test01_Project/data/gato_ujxhni.mp4");
    while(1){
    //declarando frame
    Mat frame;
    vid_capture.read(frame);
    imshow("original",frame);
    //flip(source,destination,flipcode)
    //flipcode can be 1(flip around y axis), 0 (flip around x axis) or -1 (flip both axes)

    //voltear(origen,destino,flipcode)
     //flipcode puede ser 1 (girar alrededor del eje y), 0 (girar alrededor del eje x) o -1 (girar ambos ejes)
    flip(frame,frame,-1);
    imshow("Rotado con flip",frame);//imshow(windows name,frame)
    waitKey(30);//wait 30 milliseconds
    } 
	return 0;
}