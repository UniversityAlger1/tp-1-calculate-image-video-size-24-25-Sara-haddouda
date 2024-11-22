#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
   
   float size,Size_Image_Bitmap,Size_Movie_Body,Size_Image_B_W,Size_Video_Credit;
   
   Size_Image_Bitmap = w * h * 8 * 3;
   Size_Movie_Body = Size_Image_Bitmap * fps * durationMovie;
   
   Size_Image_B_W = w * h;
   Size_Video_Credit = w * h * durationCredits;
   
   size = Size_Movie_Body + Size_Video_Credit;
   
   if (strcmp(unit, "bt") == 0) {
    }
    else if (strcmp(unit, "o") == 0) {
        size = size / 8;
    }
    else if (strcmp(unit, "ko") == 0) {
        size = size / 8 / 1024;
    }
    else if (strcmp(unit, "mo") == 0) {
        size = size / 8 / 1024 / 1024;
    }
    else if (strcmp(unit, "go") == 0) {
        size = size / 8 / 1024 / 1024 / 1024;
    }
    else {
        return 0;
    }
   
   // YOUR CODE HERE - END
   return size;
}
