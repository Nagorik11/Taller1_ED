#include <algorithm>
#include "Board.h"
#include <bitset>
#include <fstream>


Board::Board(int rows, int cols) {
        id = this->steps;
        mpp = new MPP(rows, cols);
        steps = this->steps;
        //steps=this->id;
    }


Board::~Board() {
    delete mpp;
}

const bitset<8> Board::getId() const {
// retornar la id de la matriz
    return this->id;
}

MPP * Board::print() {

        bitset<8> id= bitset<8>(this->id=Board::count_entries());
        mpp->setId(id.to_ulong());
        cout << "Id: " << id << endl;
        this->id;
        this->mpp->print();
        Board::store_record(*this,id.to_string());
        return this->mpp;
}


MPP * Board::update(int row, int col, int value) {

    return Board::print();

}

void Board::setId(int id) {
    Board::id = bitset<8>(id);
}

MPP *Board::getMpp() const {
    return mpp;
}

void Board::setMpp(MPP *mpp) {
    Board::mpp = mpp;
}



Board::Board(int id, MPP *mpp, int nextId) : id(id), mpp(mpp), steps(nextId) {}

void Board::store_record(Board board,string id) const {
    std::ofstream outfile("output.txt", std::ios::app); // Abrir el archivo en modo de escritura, agregando al final


    outfile << "Id: " << id << ","<< "Filas: " << board.getMpp()->getRows() << "," << "Columnas: " << board.getMpp()->getCols() <<"Steps: " <<std::endl;
    // Aquí podrías agregar más información del objeto, dependiendo de tus necesidades

    outfile.close(); // Cerrar el archivo

}

int Board::count_entries() {
    int count = 0;
    string line;
    ifstream infile("output.txt");
    while (getline(infile, line)) {
        ++count;
    }
    return count;
}

void Board::search_biggest_board() {
    string line;
    ifstream infile("output.txt");
    int max_row=0;
    int max_col=0;
    while(getline(infile,line)){
        //leer campos
        string id;
        string rows;
        string cols;
        int pos=0;
        int pos2=0;
        int pos3=0;
        for(int i=0;i<line.length();i++){
            if(line[i]==','){
                pos=i;
                break;
            }
        }

    }

}

MPP *Board::generate_cell_distribution_(int num_cells, MPP *mpp){
    int rows = mpp->getRows();
    int cols = mpp->getCols();
    int value = 1;
    for (int i = 0; i < num_cells; i++) {
        int row = rand() % rows;
        int col = rand() % cols;
        mpp->setValue(row, col, value);
    }
    return mpp;
}

int Board::getStep() const {
    return steps;
}

void Board::setStep(int step) {
    this->steps = step;
}


MPP *step_update(MPP *mpp) {
    int rows = mpp->getRows();
    int cols = mpp->getCols();

    mpp->print();

    return mpp;
}
