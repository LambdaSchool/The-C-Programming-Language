#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "audio.h"

struct ppmTemplate getTemplateAudio() {
  struct ppmTemplate returnTemplate;
  // code that initializes the template1 structure
  //


  // This is the code for mallocing a 2d array
  int m = 456;
  int n = 666;
  string fileName= "/home/mark/lambda/The-C-Programming-Language/src/image-stamper/ppm/audio.ppm";
  /*
  int** twoDArray;
  twoDArray = (int **)malloc(m * sizeof(void*));
  for(int i = 0 ; i < m ; ++i ) {
    twoDArray[i] = (int *)malloc(n * sizeof(int));
  }

  // next lets copy the image[40][40] data into our 2D array
  for (int i = 0; i < m; i++) {
    for(int j= 0; j < n; j++) {
      twoDArray[i][j] = image[i][j];
    }
  }
  */
  returnTemplate.fileName = fileName;
  returnTemplate.width = m;
  returnTemplate.height = n;
  // code that reads template1.dat
  // code that puts data from template1.dat into template1 structure
  /* -- test print function
  for (int i = 0; i < m; i++) {
    forhttps://console.cloud.google.com/compute/needsbilling?success_path=0.000000compute0.000000settings0.000000project%3Dmy-first-project-143800&project=my-first-project-143800(int j= 0; j < n; j++) {
      printf("4200292", returnTemplate.stamp[i][j]);
    }
    printf("\n");
  }
  */

  return returnTemplate;
}


