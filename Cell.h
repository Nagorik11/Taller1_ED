//
// Created by nagorik on 13-04-23.
//

#ifndef _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
#define _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H


class Cell {
private:
    int row;
    int col;
public:
    int getRow() const;

    void setRow(int row);

    int getCol() const;

    void setCol(int col);

    bool isAlive2() const;

private:
    int neighborCount;
    bool isAlive = false;
public:
    Cell(int row, int col,int neighborCount, bool isAlive);

    int getNeighborCount() const;

    void setNeighborCount(int neighborCount);

    bool isAlive1() const;

    Cell();
    bool getIsAlive();
    bool setIsAlive(bool isAlive);
};


#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
