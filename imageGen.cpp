#ifndef cimg_debug
#define cimg_debug 1
#endif
#include "cimg/CImg.h"
using namespace cimg_library;
#undef min
#undef max

int main() {
  CImg<unsigned char> image("template.bmp");
  CImgDisplay display(image.width(), image.height(), "My Image");
  display.display(image);

  unsigned char white[] = { 255, 255, 255 };
  image.draw_text(100, 100, "Hello, World!", white, 0, 24);
  display.display(image);

  display.wait();
  image.save("output.bmp");

  return 0;
}
