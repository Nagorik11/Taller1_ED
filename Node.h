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
    /**
     * Constructor por parámetros
     * @param cell
     * @param nextRight
     * @param nextUp
     */
    Node(Cell cell, Node *nextRight, Node *nextUp);
    /**
     * Constructor por defecto
     */
    Node();
    /**
     * Constructor por celula
     * @param cell
     */
    Node(Cell cell);
    /**
     * getter de nextRight
     * @return
     */
    Node *getNextRight() const;
    /**
     * setter de nextRight
     * @param nextRight
     */
    void setNextRight(Node *nextRight);
    /**
     * getter de nextUp
     * @return
     */
    Node *getNextUp() const;
    /**
     * setter de nextUp
     * @param nextUp
     */
    void setNextUp(Node *nextUp);
    /**
     * getter de cell
     * @return
     */
    Cell getCell() const;
    /**
     * setter de cell
     * @param cell
     */
    void setCell(Cell cell);
    /**
     * Destructor
     */
    virtual ~Node();
};


#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_NODE_H
