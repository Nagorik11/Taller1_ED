/**
 * @file Node.h
 * @brief Archivo de cabecera de la clase Node
 * @author Valenzuela, Fernando
 * @date 2023-04-23
 */

#ifndef _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_NODE_H
#define _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_NODE_H
#include "Cell.h"
class Node {
public:
    Node(int row, int col, int value);

    int getRow() const;
    int getCol() const;
    int getValue() const;
    Node* getNextRight() const;
    Node* getNextDown() const;

    void setRow(int row);
    void setCol(int col);
    void setValue(int value);
    void setNextRight(Node* nextRight);
    void setNextDown(Node* nextDown);

private:
    int row;
    int col;
    int value;
    Node* nextRight;
    Node* nextDown;
};
#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_NODE_H
