#include "Pole.h"
#include <iostream>

Pole::Pole(int n, int m) {
    this->n = n;
    this->m = m;
    this->mas = new Cell *[this->n];
    for (int i = 0; i < this->n; i++) {
        mas[i] = new Cell[this->m];
    }
}

int Pole::getKolPaths() {
    if (mas == nullptr) { return 0; }

    for (int i = 0; i < this->n; i++) {
        for (int j = 0; j < this->m; j++) {
            if(i!=0 && j!=0) {
               mas[i][j].setKolWay(mas[i - 1][j].getKolWay() + mas[i][j - 1].getKolWay());
            }
        }
    }
    return mas[this->n - 1][this->m - 1].getKolWay();
}

