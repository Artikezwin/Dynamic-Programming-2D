#include <iostream>
#include "Cell.h"
#include "Pole.h"

using namespace std;

/*Дано прямоугольное поле размером n*m клеток.
Можно совершать шаги длиной в одну клетку
вправо или вниз. Посчитать, сколькими способами
можно попасть из левой верхней клетки в правую
нижнюю. */

int main() {
    Pole pole(5, 3);
    cout<<pole.getKolPaths();

    return 0;
}
