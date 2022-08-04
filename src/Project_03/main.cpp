
#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main() {
	//Abrimos el archivo mp4
	VideoCapture vid_capture("/home/elizabeth/Documents/CG/Test01_Project/data/gato_ujxhni.mp4");
    while(1){
		//Declaramos Frame
    Mat frame;
		//Leemos frame
    vid_capture.read(frame);
		//imshow(nombre de la ventana, frame)
		imshow("original",frame);
		double angle = 45;
		// obtener las coordenadas del centro de la imagen para crear la matriz de rotación 2D
		Point2f center((frame.cols - 1) / 2.0, (frame.rows - 1) / 2.0);
		// usando getRotationMatrix2D() para obtener la matriz de rotación
		Mat rotation_matix = getRotationMatrix2D(center, angle, 1.0);
		// guardaremos la imagen resultante en la matriz de imagen rotada
		Mat rotated_frame;	
		// rotar la imagen usando warpAffine
		warpAffine(frame, rotated_frame, rotation_matix, frame.size());
    imshow("rotate",rotated_frame);
		//esperamos 30 milliseconds
    waitKey(30);
    } 
	return 0;
}