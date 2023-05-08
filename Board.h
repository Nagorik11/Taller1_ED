/**
 * Project Untitled
 */
#ifndef BOARD_H
#define BOARD_H

#include <bitset>
#include "MPP.h"

class Board {
private:
    bitset<8> id = 0;
    MPP *mpp;
    int steps;

public:
    /**
     * Constructor
     * @param id
     * @param mpp
     * @param steps
     */
    Board(int id, MPP *mpp, int steps);


    /**
     * Constructor
     * @param rows
     * @param cols
     */
    Board(int rows, int cols);
    /**
     * Setter de id
     * @param id
     */
    void setId(int id);
    /**
     * Getter de mpp
     * @return
     */
    MPP *getMpp() const;
    /**
     * Setter de mpp
     * @param mpp
     */
    void setMpp(MPP *mpp);
    //TODO: revisar si es necesario
    int getStep() const;

    void setStep(int step);
    /**
     * Destructor
     */
    ~Board();
    /**
     * Getter de id (binario)
     * @return
     */
    const bitset<8> getId() const ;

    /**
     * Imprime la matriz
     * @return
     */
    MPP * print();


    /**
     * Guarda el registro de la partida en un archivo
     * @param board
     * @param id
     */
    void store_record(Board board,string id) const;

    /**
     * Cuenta la cantidad de entradas en el archivo
     * @return
     */
    static int count_entries();


    /**
     * Busca la matriz mas grande en el archivo
     */
    static void search_biggest_board();

    /**
     * Actualiza la matriz
     * @param row
     * @param col
     * @param value
     * @return
     */
    MPP *update(int row, int col, int value);

    /**
     * Genera una distribucion de celulas aleatoria
     * @param num_cells
     * @param mpp
     * @return
     */
    MPP *generate_cell_distribution_(int num_cells, MPP *mpp);
};
    /**
     * Genera un paso más en la simulacion
     * @param mpp
     * @return
     */
    MPP *step_update(MPP *mpp);


#endif // BOARD_H
