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

void Cell::setRow(int newrow) {
    this->row = newrow;
}

int Cell::getCol() const {
    return col;
}

void Cell::setCol(int newcol) {
    this->col = newcol;
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

Cell::~Cell() {

}

void Cell::setValue(int i) {
    if (i == 0) {
        isAlive = false;
    } else {
        isAlive = true;
    }

}

Cell::Cell(int row, int col, bool isAlive, int neighborCount) {
    this->row = row;
    this->col = col;
    this->isAlive = isAlive;
    this->neighborCount = neighborCount;

}

Cell::Cell(int row, int col) : row(row), col(col) {}

