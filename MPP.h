#ifndef MPP_H
#define MPP_H

/**
 * @file MPP.h
 * @brief Archivo de cabecera de la clase MPP
 * @author Valenzuela, Fernando
 * @date 2023-04-23
 */
#include <iostream>
#include <vector>
#include "Cell.h"

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
        /**
         * Constructor
         * @param rows
         * @param cols
         */
        MPP(int rows, int cols);
        /**
         * Constructor
         * @param id
         * @param rows
         * @param cols
         */
        void setValue(int row, int col, int value);
        /**
         * Metodo para obtener el valor presente en una coordenada
         * @param row
         * @param col
         * @return
         */
        int getValue(int row, int col) const;
        /**
         * Metodo para imprimir la matriz
         */
        void print() const;
        /**
         * Getter de id de la MPP
         * @return
         */
        int getId() const;
        /**
         * Setter de id de la MPP
         * @param id
         */
        void setId(int id);
        /**
         * Getter de rows
         * @return
         */
        void setRows(int rows);
        /**
         * Getter de cols
         * @return
         */
        int getCols() const;
        /**
         * Setter de rows
         * @param rows
         */
        int getRows() const;
        /**
         * Setter de cols
         * @param cols
         */
        void setCols(int cols);
        /**
         * getter de arreglo cabezal Arow
         */
        const vector<int> &getArow() const;
        /**
         * setter de arreglo cabezal Arow
         */
        void setArow(const vector<int> &arow);
        /**
         * getter de arreglo cabezal Acol
         */
        const vector<int> &getAcol() const;
        /**
         * setter de arreglo cabezal Acol
         */
        void setAcol(const vector<int> &acol);
        /**
         * getter de arreglo de valores
         */
        const vector<int> &getValues() const;
        /**
         * setter de arreglo de valores
         */
        void setValues(const vector<int> &values);
        /**
         * Metodo para agregar una celula a la MPP
         * @param cell
         */
        void add(Cell cell);
        /**
         * Metodo para remover una celula de la MPP
         * @param cell
         */
        void remove(Cell cell);

        /**
         * Metodo para verificar si una celula existe en la MPP
         * @param cell
         * @return
         */
        bool exists(Cell cell);

        /**
         * Metodo para obtener el numero de vecinos de una celula
         * @param cell
         * @return
         */
        int count_neighbors(MPP&, Cell cell);
    };

#endif // MPP_H
