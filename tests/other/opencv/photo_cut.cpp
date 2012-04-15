#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

#include<iostream>
#include<stdexcept>
#include <cstdio>
using namespace std;

//************************************
// Method:    cut_photo
// FullName:  cut_photo
// Access:    public 
// Returns:   bool				true if cutting is success else false
// Qualifier:
// Parameter: const char * fp_src	the file path of a source image file
// Parameter: const char * fp_dst	the destination file path of new cutted file you want to save
// Parameter: int x				the x of cut position in the source image
// Parameter: int y				the y of cut position in the source image
// Parameter: int w				the width of new cutted image
// Parameter: int h				the height of new cutted image
//************************************
bool cut_photo(const char* fp_src, const char* fp_dst, int x, int y, int w, int h) {
	IplImage* src, * dst;
	src = cvLoadImage(fp_src);
	if (!src) {
		cerr<<"cut_photo: unable to load image from "<<fp_src<<endl;
		return false;
	}
	try {
		cvSetImageROI(src, cvRect(x, y, w, h));
		dst=cvCreateImage(cvSize(w, h), IPL_DEPTH_8U, src->nChannels);
		cvCopy(src, dst, 0);
		cvSaveImage(fp_dst, dst);
		cvResetImageROI(src);
		cvReleaseImage(&src);
		cvReleaseImage(&dst);
		return true;
	} catch (...) {
		cerr<<"cut_photo: exception when cutting a image "<<fp_src<<endl;
		return false;
	}

}

int main()
{
	cut_photo("a.jpg", "1.jpg", 0, 0, 50, 50);
	cut_photo("a.jpg", "2.jpg", 50, 50, 50, 50);
	return 0;
}


