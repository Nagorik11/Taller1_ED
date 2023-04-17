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
            if (rowsIndex[i] == row && colsIndex[i] == col) {
                // update existing value
                values[i] = value;
                return;
            }
        }

        // add new value
        rowsIndex.push_back(row);
        colsIndex.push_back(col);
        values.push_back(value);
    }

    int MPP::getValue(int row, int col) const {
        // search for existing value
        for (int i = 0; i < values.size(); i++) {
            if (rowsIndex[i] == row && colsIndex[i] == col) {
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
                std::cout << "\u25A1 "; // cuadrado blanco
            } else {
                std::cout << "\u25A0 "; // cuadrado negro
            }
        }
        std::cout << std::endl;
    }
}

