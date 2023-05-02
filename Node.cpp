#include "Node.h"
/*
Node::Node(Cell cell, Node *nextRight, Node *nextUp) {
    this->cell = cell;
    this->nextRight = nextRight;
    this->nextUp = nextUp;
}

Node::Node() {
    this->nextRight = nullptr;
    this->nextUp = nullptr;
}

Node::Node(Cell cell) {
    this->cell = cell;
    this->nextRight = nullptr;
    this->nextUp = nullptr;
}

Node *Node::getNextRight() const {
    return nextRight;
}

Node * Node::setNextRight() {
    return nextRight;

}

Node *Node::getNextUp() const {
    return nextUp;
}

void Node::setNextUp(Node *nextUp) {
    this->nextUp = nextUp;
}

Cell Node::getCell() const {
    return cell;
}

void Node::setCell(Cell cell) {
    this->cell = cell;
}

Node::~Node() {
    delete nextRight;
    delete nextUp;

}

Node::
Node::Node(int row, int col, int value) {
    this->cell.setRow(row);
    this->cell.setCol(col);
    this->cell.setValue(value);
    this->nextRight = nullptr;
    this->nextUp = nullptr;

}
*/
Node::Node(int row, int col, int value) {
    this->row = row;
    this->col = col;
    this->value = value;
    this->nextRight = nullptr;
    this->nextDown = nullptr;
}

int Node::getRow() const {
    return row;
}

int Node::getCol() const {
    return col;
}

int Node::getValue() const {
    return value;
}

Node* Node::getNextRight() const {
    return nextRight;
}

Node* Node::getNextDown() const {
    return nextDown;
}

void Node::setRow(int row) {
    this->row = row;
}

void Node::setCol(int col) {
    this->col = col;
}

void Node::setValue(int value) {
    this->value = value;
}

void Node::setNextRight(Node* nextRight) {
    this->nextRight = nextRight;
}

void Node::setNextDown(Node* nextDown) {
    this->nextDown = nextDown;
}