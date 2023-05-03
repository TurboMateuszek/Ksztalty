#include <iostream>

using namespace std;

#include "border.hpp"

Border::Border(int h, int w, char s, string c, int m)
    : marg(m), Rectangle(h, w, s, c) {

  cout << "Konstruktor Border" << endl;
  Cut();
}

Border::Border(Rectangle p, int m) : marg(m), Rectangle(p) {
  cout << "Konstruktor Border z kopii rectangle" << endl;
  Cut();
}

void Border::Cut() {
  int i, j;
  for (j = marg; j < height - marg; j++)
    for (i = marg; i < width - marg; i++)
      tab[j][i] = -1;
}