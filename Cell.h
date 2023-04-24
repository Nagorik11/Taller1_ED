//
// Created by nagorik on 13-04-23.
//

#ifndef _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
#define _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H

class Cell {
public:
/**
 * Constructor por defecto
 */
    Cell();

    /**
     * Constructor con parámetros
     * @param row
     * @param col
     * @param isAlive
     * @param neighborCount
     */
    Cell(int row, int col, bool isAlive = false, int neighborCount = 0);

    /**
     * Método para obtener el estado de la célula
     * @return
     */
    bool getIsAlive() const;
    /**
     * Método para establecer el estado de la célula
     * @param status
     * @return
     */
    bool setIsAlive(bool status);

    /**
     * Método para incrementar el número de vecinos de la célula
     *
     * @param row
     */
    int getRow() const;
     /**
      * Método para establecer la fila de la célula
      * @param row
      */
      /**
       * Método para establecer la columna de la célula
       * @param col
       */
    void setRow(int row);
    /**
     * Método para obtener la columna de la célula
     * @return
     */
    int getCol() const;
    /**
     * Método para establecer la columna de la célula
     * @param col
     */
    void setCol(int col);

    /**
     * Método para obtener el número de vecinos de la célula
     * @return
     */
    int getNeighborCount() const;
    /**
     * Método para establecer el número de vecinos de la célula
     * @param neighborCount
     */
    void setNeighborCount(int neighborCount);
    /**
     * Método para incrementar el número de vecinos de la célula
     */
    void incrementNeighborCount();
    /**
     * Método para decrementar el número de vecinos de la célula
     */
    void decrementNeighborCount();
    /**
     * Método para reiniciar el número de vecinos de la célula
     */
    void resetNeighborCount();
    /**
     * Destructor
     */
    virtual ~Cell();

private:
    int row;
    int col;
    bool isAlive;
    int neighborCount;


};



#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
