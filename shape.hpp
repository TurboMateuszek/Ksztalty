#include <iostream>
using namespace std;
#pragma once

class Shape {
protected:
    int height;
    int width;
    char znak;
    string color;
    string colorname;

    int** tab;


    int x, y;
    static int counter;

  

public:
    void print();
    void Alloc();

    virtual void Fill() = 0;

    Shape(int h, char z, string c);

    ~Shape();

    void SetXY(int _y, int _x);


    friend class Forest;
};