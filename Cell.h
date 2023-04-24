//
// Created by nagorik on 13-04-23.
//

#ifndef _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
#define _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H

class Cell {
public:
    // Constructor por defecto
    Cell();

    // Constructor con parámetros
    Cell(int row, int col, bool isAlive = false, int neighborCount = 0);

    // Métodos para obtener y establecer el estado de la célula
    bool getIsAlive() const;
    bool setIsAlive(bool status);

    // Métodos para obtener y establecer la posición de la célula
    int getRow() const;
    void setRow(int row);
    int getCol() const;
    void setCol(int col);

    // Métodos para obtener y establecer el número de vecinos de la célula
    int getNeighborCount() const;
    void setNeighborCount(int neighborCount);

private:
    int row;
    int col;
    bool isAlive;
    int neighborCount;

    void incrementNeighborCount();

    void decrementNeighborCount();

    void resetNeighborCount();
};



#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
