//
// Created by nagorik on 15-04-23.
//

#ifndef _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_NODE_H
#define _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_NODE_H
#include "Cell.h"

class Node {
private:
    Cell cell;
    Node *nextRight;
    Node *nextUp;

public:
    Node(Cell cell, Node *nextRight, Node *nextUp);
    Node();
    Node(Cell cell);
    Node *getNextRight() const;
    void setNextRight(Node *nextRight);
    Node *getNextUp() const;
    void setNextUp(Node *nextUp);
    Cell getCell() const;
    void setCell(Cell cell);
    virtual ~Node();
};


#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_NODE_H
