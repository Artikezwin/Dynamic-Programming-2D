#include "Cell.h"

Cell::Cell(int kolWay) {
    this->kol_way = kolWay;
}

int Cell::getKolWay() const {
    return kol_way;
}

void Cell::setKolWay(int kolWay) {
    kol_way = kolWay;
}

Cell::Cell() {}
