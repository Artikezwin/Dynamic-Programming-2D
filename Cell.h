#ifndef PR7_CELL_H
#define PR7_CELL_H


class Cell { /**Клетка*/
    int kol_way = 1;
public:
    Cell(int kolWay);

    Cell();

    int getKolWay() const;

    void setKolWay(int kolWay);
};


#endif //PR7_CELL_H
