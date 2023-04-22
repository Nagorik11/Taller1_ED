#include "MPP.h"

using namespace std;

    MPP::MPP(int rows, int cols) : rows(rows), cols(cols) {}

    void MPP::setValue(int row, int col, int value) {
        if (value == 0) {
            // do not store zero values
            return;
        }

        // search for existing value
        for (int i = 0; i < values.size(); i++) {
            if (Arow[i] == row && Acol[i] == col) {
                // update existing value
                values[i] = value;
                return;
            }
        }

        // add new value
        Arow.push_back(row);
        Acol.push_back(col);
        values.push_back(value);
    }

    int MPP::getValue(int row, int col) const {
        // search for existing value
        for (int i = 0; i < values.size(); i++) {
            if (Arow[i] == row && Acol[i] == col) {
                return values[i];
            }
        }

        // return default value of 0 if not found
        return 0;
    }

void MPP::print() const {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (getValue(row, col) == 0) {
                std::cout << "\u25A1"; // cuadrado blanco
            } else {
                std::cout << "\u25A0"; // cuadrado negro
            }
        }
        std::cout << std::endl;
    }

}
    int MPP::getId() const {
        return id;
    }

    void MPP::setId(int id) {
        MPP::id = id;
    }

    void MPP::setRows(int rows) {
        MPP::rows = rows;
    }

    int MPP::getRows() const{
        return this->rows;
    }
    int MPP::getCols() const {
        return cols;
    }

    void MPP::setCols(int cols) {
        MPP::cols = cols;
    }

    const vector<int> &MPP::getArow() const {
        return Arow;
    }

    void MPP::setArow(const vector<int> &arow) {
        Arow = arow;
    }

    const vector<int> &MPP::getAcol() const {
        return Acol;
    }

    void MPP::setAcol(const vector<int> &acol) {
        Acol = acol;
    }

    const vector<int> &MPP::getValues() const {
        return values;
    }

    void MPP::setValues(const vector<int> &values) {
        MPP::values = values;
    }




