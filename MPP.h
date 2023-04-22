#ifndef MPP_H
#define MPP_H

#include <iostream>
#include <vector>

using namespace std;

    class MPP {
    private:
        int id;
        int rows;
        int cols;
        vector<int> Arow;
        vector<int> Acol;
        vector<int> values;


    public:

        MPP(int rows, int cols);

        void setValue(int row, int col, int value);

        int getValue(int row, int col) const;

        void print() const;


        int getId() const;

        void setId(int id);

        void setRows(int rows);

        int getCols() const;

        int getRows() const;

        void setCols(int cols);

        const vector<int> &getArow() const;

        void setArow(const vector<int> &arow);

        const vector<int> &getAcol() const;

        void setAcol(const vector<int> &acol);

        const vector<int> &getValues() const;

        void setValues(const vector<int> &values);

    };

#endif // MPP_H
