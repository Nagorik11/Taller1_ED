#ifndef MPP_H
#define MPP_H

#include <iostream>
#include <vector>

namespace std {

    class MPP {
    public:
        MPP(int rows, int cols);
        void setValue(int row, int col, int value);
        int getValue(int row, int col) const;
        void print() const;

    private:
        int rows;
        int cols;
        std::vector<int> rowsIndex;
        std::vector<int> colsIndex;
        std::vector<int> values;
    };

} // namespace std

#endif // MPP_H
