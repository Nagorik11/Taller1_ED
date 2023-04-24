//
// Created by nagorik on 13-04-23.
//
#include "Cell.h"

Cell::Cell() {
    row = 0;
    col = 0;
    isAlive = false;
    neighborCount = 0;
}
bool Cell::getIsAlive() const {
    return isAlive;
}

bool Cell::setIsAlive(bool isAlive) {
    this->isAlive = isAlive;
}

int Cell::getNeighborCount() const {
    return neighborCount;
}

void Cell::setNeighborCount(int neighborCount) {
    this->neighborCount = neighborCount;
}

int Cell::getRow() const {
    return row;
}

void Cell::setRow(int row) {
    this->row = row;
}

int Cell::getCol() const {
    return col;
}

void Cell::setCol(int col) {
    this->col = col;
}

void Cell::incrementNeighborCount() {
    neighborCount++;
}

void Cell::decrementNeighborCount() {
    neighborCount--;
}

void Cell::resetNeighborCount() {
    neighborCount = 0;
}
