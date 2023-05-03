#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

#include "shape.hpp"

class Forest {
public:


    int H, W;
    int** tab;

    vector<Shape*> shapes;

    void AddShape(Shape *shape, int y, int x); //10, '%', "green", 2, 2

    Forest(int h, int w);

    ~Forest();

    void PrintForest();

    Forest& operator+=(Shape *shape);

};

