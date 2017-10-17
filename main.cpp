/*
** Author: Majed Alshaikhhussain
** October 16, 2017
** p02: Old Timey Photo
** -The program starts by asking the user about the image file which is in BMP format.
** -The program will store the file.
** -The program will convert the image pixel to a grescale.
** -It will save the converted file as oldtimey.bmp
*/
 
#include "bitmap.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
	string imageName; 
	// Declare new variable of type string to hold the name of the image
	Bitmap image,newImage; 
	// Decalre new variables of type Bitmap, image stores the image file, newImage stores the converted image
	vector <vector <Pixel> > bmp, newBmp; 
	// Declare new variables of type Pixel to hold image pixels
	int rgbAvg; 
	// Decalre new variable of type int to hold the average RGB color for pixel
	
	while(!image.isImage()){ 
	// Loop while the image entered is invalid
		cout<<"Enter the name of the image (Must be in windows BMP format)"<<endl; 
		// Asks the user to enter the file name
		cin>>imageName; 
		// let the user enter the image name
		image.open(imageName); 
		// Open the image that the user entered
	}
	bmp = image.toPixelMatrix(); 
	// Convert the image file to pixel
	newBmp.resize(bmp.size()); 
	// Resizing the newimage columns to equal the opened image
	for(int i=0; i<bmp.size();i++){
		newBmp[i].resize(bmp[i].size()); 
		// Resizing the newimage rows to equal the opened image
		for(int j=0;j<bmp[i].size();j++){ 
			rgbAvg=(bmp[i][j].red+bmp[i][j].green+bmp[i][j].blue)/3; 
			// Finding the average of the three components
			newBmp[i][j].red=(rgbAvg); 
			newBmp[i][j].green=rgbAvg;
			newBmp[i][j].blue=rgbAvg;
			// Assign all three components to the average
		}
	}
	image.fromPixelMatrix(newBmp); 
	// Convert from pixel to image bmp
    image.save("oldtimey.bmp"); 
	// Saves the coverted picture in a new file called oldtimey.bmp
 
  return 0;
}
