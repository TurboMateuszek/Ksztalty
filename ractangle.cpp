#include "rectangle.hpp"
#include <iostream>
using namespace std;

void Rectangle::Fill() {
  int i, j;

  for (j = 0; j < height; j++) {
    for (i = 0; i < width; i++)
      tab[j][i] = 1;
  }
};

Rectangle::Rectangle(int h, int w, char s, string c) : Shape(h, s, c) {
  cout << "Konstruktor Rectangle" << endl;
  width = w;
  Alloc();
  Fill();
}

Rectangle::Rectangle(int h, char s, string c) : Shape(h, s, c) {
  cout << "Konstruktor Square" << endl;
  width = h;
  Alloc();
  Fill();
}

Rectangle::Rectangle(Rectangle &p) : Shape(p.height, p.znak, p.colorname) {
  cout << "Konstruktor Kopiujacy" << endl;
  width = p.width;
  Alloc();
  Fill();
}