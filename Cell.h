/**
 * @file Cell.h
 * @brief Archivo de cabecera de la clase Cell
 * @author Valenzuela, Fernando
 * @date 2023-04-23
 *
 */

#ifndef _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
#define _CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H

class Cell {
public:
/**
 * Constructor por defecto
 */
    Cell();

    Cell(int row, int col);

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
    void setRow(int newrow);
    /**
     * Método para obtener la columna de la célula
     * @return
     */
    int getCol() const;
    /**
     * Método para establecer la columna de la célula
     * @param col
     */
    void setCol(int newcol);

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

    void setValue(int i);

private:
    int row;
    int col;
    bool isAlive;
    int neighborCount;


};



#endif //_CLION__TALLER1_RIQUELMEFRANCISCO_VALENZUELAFERNANDO_CELL_H
