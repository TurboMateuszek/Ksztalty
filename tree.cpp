#include <iostream>

using namespace std;

#include "tree.hpp"

/*void Tree::printTree() {
  int i, j;

  if (color == "green")
    cout << "\033[0;32m";

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < 2 * height - 1; j++) {
      cout << tab[i][j];
    }
    cout << endl;
  }
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < 2 * height - 1; i++) {
      cout << tab[j][i];
    }
    cout << endl;
  }
}*/

/*Tree::Tree(int h, char z, string c) {
  int j, i;
  height = h;
  znak = z;
  color = c;

  if (c == "green")
    color = "\033[1;32m";

  if (c == "red")
    color = "\033[1;31m";

  if (c == "blue")
    color = "\033[1;34m";

  tab = new int *[height];
  for (j = 0; j < height; j++) {
    tab[j] = new int[2 * height - 1];
    for (i = 0; i < 2 * height - 1; i++)
      tab[j][i] = 0;
  }

  for (j = 0; j < height; j++) {
    for (i = height - j - 1; i < height + j; i++) {
      tab[j][i] = 1;
    }
  }

  counter++;
}

Tree::~Tree() {
  int j;
  for (j = 0; j < height; j++) {
    delete tab[j];
  }
  delete tab;
  counter--;
  cout << endl << "kasuje drzewo: zostalo " << counter << endl;
}*/