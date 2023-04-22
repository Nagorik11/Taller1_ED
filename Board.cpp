#include <algorithm>
#include "Board.h"
#include <bitset>
#include <fstream>


Board::Board(int rows, int cols) {
        id = this->nextId;
        mpp = new MPP(rows, cols);
        nextId=this->id++;
    }


Board::~Board() {
    delete mpp;
}

int Board::getId() const {
// retornar la id de la matriz
    return this->id;
}

MPP *Board::getMPP() {
    return nullptr;
}

MPP * Board::print() {

        bitset<8> id= bitset<8>(this->id);
        cout << "Id: " << id << endl;
        this->mpp->print();
        Board::store_record(*this,id.to_string());
        return this->mpp;
}


void Board::setId(int id) {
    Board::id = id;
}

MPP *Board::getMpp() const {
    return mpp;
}

void Board::setMpp(MPP *mpp) {
    Board::mpp = mpp;
}

int Board::getNextId() const {
    return nextId;
}

void Board::setNextId(int nextId) {
    Board::nextId = nextId;
}

Board::Board(int id, MPP *mpp, int nextId) : id(id), mpp(mpp), nextId(nextId) {}

void Board::store_record(Board board,string id) const {
    std::ofstream outfile("output.txt", std::ios::app); // Abrir el archivo en modo de escritura, agregando al final


    outfile << "Id: " << id << ","<< "Filas: " << board.getMpp()->getRows() << "," << "Columnas: " << board.getMpp()->getCols() << std::endl;
    // Aquí podrías agregar más información del objeto, dependiendo de tus necesidades

    outfile.close(); // Cerrar el archivo

}


void store_record(const Board& mpp_obj) {
    std::ofstream outfile("output.txt", std::ios::app); // Abrir el archivo en modo de escritura, agregando al final

    outfile << "Nuevo objeto mpp creado con los siguientes atributos: " << std::endl;
    outfile << "Id: " << mpp_obj.getId() << std::endl;
    // Aquí podrías agregar más información del objeto, dependiendo de tus necesidades

    outfile.close(); // Cerrar el archivo
}