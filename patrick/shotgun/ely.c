#include <stdio.h>
#include <stdlib.h>


int main() {
  int width = 255;
  int height = 255;

  FILE *image = fopen("picture.ppm", "wb");
  fprintf(image, "P3\n");
  fprintf(image, "%d %d\n", width, height);
  fprintf(image, "255\n");


  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      int r = i % rand() % (255 + 1 - 0) + 0;
      int g = j % rand() % (255 + 1 - 0) + 0;;
      int b = j * i % rand() % (255 + 1 - 0) + 0;
      fprintf(image, "%d %d %d\n", r, g, b);
    }
  }
  // system("convert picture.ppm picture.png");
  system("/usr/local/bin/ffmpeg -i picture.ppm picture.png"); // exec?
  // remove("picture.ppm");
  return 0;
}
