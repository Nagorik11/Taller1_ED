//
// Created by nagorik on 23-04-23.
//

#ifndef _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_LINKEDLIST_H
#define _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_LINKEDLIST_H
#include "Node.h"
#include "Cell.h"
class LinkedList {
private:
    static Node *head; // Puntero al primer nodo de la lista
public:
    LinkedList() {
        head = nullptr;
    }

    /**
     * Método para agregar un nodo a la lista
     * @param cell
     */
    void addNode(const Cell& cell);

};

#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_LINKEDLIST_H
