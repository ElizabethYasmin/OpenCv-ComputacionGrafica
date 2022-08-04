//Include Libraries
#include<opencv2/opencv.hpp>
#include<iostream>

// Namespace nullifies the use of cv::function(); 
//using namespace std;
//using namespace cv;

int main()
{
	// Read an image 
	cv::Mat img_rgb = cv::imread(
		"/home/elizabeth/Documents/CG/Test01_Project/data/pucca.png"
		, cv::IMREAD_GRAYSCALE);
        //IMREAD_GRAYSCALE

	// Read an image 
    cv::Mat img_grayscale = cv::imread(
		"/home/elizabeth/Documents/CG/Test01_Project/data/lena_original.png"
		, cv::IMREAD_GRAYSCALE);
    
    cv::Mat img_resize;
    cv::resize( img_rgb , img_resize, cv::Size(), 0.25 ,0.25 );


    int numrows, numcols;

    numrows = img_grayscale.rows;
    numcols = img_grayscale.cols;

    cv::Mat img_copy;
    
    img_copy = img_grayscale.clone();

    for (int row = 1; row < numrows - 1; ++row)
    {
        for (int col = 1; col < numcols - 1; ++col)
        {
            // check if intensity is black or white
            //if (img_grayscale.at<uchar>(row, col) < 80 || img_grayscale.at<uchar>(row, col) > 200)
            if (img_grayscale.at<uchar>(row, col) < 125)
            {
                img_copy.at<uchar>(row, col) = 0;
            }
            else
            {
                img_copy.at<uchar>(row, col) = 255;
            }
        }
    }

	// Display the image.
    cv::imshow("rgb image", img_rgb);
    cv::imshow("rgb image resize", img_resize);
	//cv::imshow("grayscale image", img_grayscale);
    //cv::imshow("copy image", img_copy);

	// Wait for a keystroke.   
    cv::waitKey(0);

	// Destroys all the windows created                         
    cv::destroyAllWindows();

	
	return 0;
}






