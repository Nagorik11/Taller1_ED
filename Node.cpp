#include "Node.h"

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

void Node::setNextRight(Node *nextRight) {
    this->nextRight = nextRight;
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
