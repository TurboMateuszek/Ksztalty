#include "forest.hpp"
#include <cassert>
void Forest::AddShape(Shape *shape, int y, int x) {
  int i, j;
  shape->x = x;
  shape->y = y;
  shapes.push_back(shape);

  for (j = 0; j < shape->height; j++)
    for (i = 0; i < 2 * shape->width; i++) {
      if (shape->tab[j][i])
        tab[j + y][i + x] = shape->tab[j][i] * shapes.size();
      if (shape->tab[j][i] == -1)
        tab[j + y][i + x] = 0;
    }
};

Forest::Forest(int h, int w) {
  H = h;
  W = w;
  tab = new int *[H];
  for (int j = 0; j < H; j++) {
    tab[j] = new int[W];
    for (int i = 0; i < W; i++) {
      tab[j][i] = 0;
    }
  }
}

Forest::~Forest() {
  for (auto t : shapes) {
    delete t;
  }
  shapes.clear();
  int j;
  for (j = 0; j < H; j++) {
    delete tab[j];
  }
  delete tab;
}

void Forest::PrintForest() {
  int i, j;
  for (j = 0; j < H; j++) {
    for (i = 0; i < W; i++) {
      int k = tab[j][i];
      assert(k >= -1 && k <= shapes.size());
      if (k) {
        cout << shapes[k - 1]->color;
        cout << shapes[k - 1]->znak;
      } else
        cout << " ";
    }
    cout << "\033[0m" << endl;
  }
  // cout << endl << "Liczba drzew: " << Shapes::counter << endl;
}

Forest &Forest::operator+=(Shape *s) {
  this->AddShape(s, s->y, s->x);

  return *this;
}