#include "bitmap.h"
#include <vector>
#include <string>

using namespace std;

int main()
{

 Bitmap image;
 vector <vector <Pixel> > bmp;

 image.open("machupicchu.bmp");
 bmp = image.toPixelMatrix();

cout<<"machupicchu.bmp has been loaded. It is "<<bmp[0].size()<<" pixels wide and "<<bmp.size()<<" Pixels high"<<endl;

  /* -The program starts by asking the user about the image file which is in BMP format.
 * -The program will store the file.
 * -The program will convert the image pixel to a grescale.
 * -It will save the converted file as oldtimey.bmp
 *  */
  return 0;
}
