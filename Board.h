#ifndef BOARD_H
#define BOARD_H

#include "MPP.h"
class Board {
private:
    int id;
    MPP *mpp;
    int nextId;
public:
    Board(int id, MPP *mpp, int nextId);

    Board(int rows, int cols);

    void setId(int id);

    MPP *getMpp() const;

    void setMpp(MPP *mpp);

    int getNextId() const;

    void setNextId(int nextId);

    ~Board();

    int getId() const ;

    static MPP *getMPP() ;

    MPP * print();

    void store_record(Board board,string id) const;

    //getrows

};

#endif // BOARD_H
