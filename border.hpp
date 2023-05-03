#pragma once
#include <iostream>

using namespace std;

#include "rectangle.hpp"

class Border : public Rectangle {
  private:
     void Cut();
  public:
    int marg;

    Border(int h, char s, string c, int m);



};