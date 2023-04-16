//
// Created by nagorik on 13-04-23.
//

#include "Cell.h"

Cell::Cell(int neighborCount, bool isAlive) : neighborCount(neighborCount), isAlive(isAlive) {}


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
