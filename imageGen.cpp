#ifndef cimg_debug
#define cimg_debug 1
#endif
#include "cimg/CImg.h"
#include <iostream>
using namespace cimg_library;
#undef min
#undef max

int main() {
  CImg<unsigned char> image("template.bmp");
  const unsigned char* data = image.data();
  CImgDisplay display(image.width(), image.height(), "Would You Image");
  display.display(image);

  unsigned char black[] = { 0, 0, 0 };
  image.draw_text(140, 141, "first text", black, 0, 1, 25, 0.5f, 0.5f);

  image.draw_text(140, 220, "second text", black, 0, 1, 25, 0.5f, 0.5f);
  display.display(image);

  image.save("output.bmp");

  std::cout << "Image buffer: " << (void*)image.data() << std::endl;

  display.wait();


  return 0;
}
