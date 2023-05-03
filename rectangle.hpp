#pragma once
#include "shape.hpp"
#include <iostream>
using namespace std;

class Rectangle : public Shape {
  void Fill();

  public:
    using Shape::Shape;
    Rectangle(int h, int w, char s, string c);
    Rectangle(int h, char s, string c);
    Rectangle(Rectangle& p);

};