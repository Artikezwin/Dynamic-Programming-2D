#ifndef PR7_POLE_H
#define PR7_POLE_H


#include "Cell.h"

class Pole {
    int n = 0, m = 0;
    Cell **mas;
public:
    Pole(int n, int m);

    int getKolPaths();
};


#endif //PR7_POLE_H
