//
// Created by nagorik on 13-04-23.
//

#include "Cell.h"


Cell::Cell() {
}
bool Cell::getIsAlive() {
    return false;
}

bool Cell::setIsAlive(bool status) {
    this -> isAlive = status;
    return status;
}

int Cell::getNeighborCount() const {
    return neighborCount;
}

void Cell::setNeighborCount(int neighborCount) {
    Cell::neighborCount = neighborCount;
}

bool Cell::isAlive1() const {
    return isAlive;
}

Cell::Cell(int row, int col, int neighborCount, bool isAlive) {
    this->row = row;
    this->col = col;
    this->neighborCount = neighborCount;
    this->isAlive = isAlive;

}

int Cell::getRow() const {
    return row;
}

void Cell::setRow(int row) {
    Cell::row = row;
}

int Cell::getCol() const {
    return col;
}

void Cell::setCol(int col) {
    Cell::col = col;
}

bool Cell::isAlive2() const {
    return isAlive;
}


