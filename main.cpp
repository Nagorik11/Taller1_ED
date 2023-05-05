#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <csignal>
#include "MPP.h"
#include "Board.h"
using namespace std;



// Prototipos de funciones
void opcion1();
void opcion2();
void opcion3();
void opcion4();
void opcion5();
int leerOpcion();
string leerOpcion_str();

int lectura();


void submenu1();
void submenu2();
void submenu3();
void submenu4();
void submenu5();

int entries =  Board::count_entries();

int main() {
    // Arreglo de funciones
    cout << "Autor: Fernando Valenzuela" << endl;
    cout << "RUT: 17725456-8" << endl;
    cout << "Taller 1: Juego de la vida de Conway" << endl;
    cout << "_______________________________________________" << endl;
    void (*opciones[])() = {opcion1, opcion2, opcion3, opcion4,opcion5};
    int opcion;
    do {
        // Mostrar el menú
        cout << "_______________________________________________" << endl;
        cout << "Juego de la Vida de Conway" << endl;
        cout << "1) Partida Rápida" << endl;
        cout << "2) Partida Personalizada" << endl;
        cout << "3) Partida Pre-fabricada" << endl;
        cout << "4) Puntuaciones" << endl;
        cout << "5) ¿Salir?" << endl;
        cout << "_______________________________________________" << endl;
        opcion = leerOpcion();

        // Verificar que la opción sea válida si es mayor 1 tampien puede ser menor que 51
        if (opcion < 1 || opcion > 5) {
            cout << "Opción inválida. Intente de nuevo." << endl;
        } else {
            // Llamar a la función correspondiente
            opciones[opcion - 1]();
        }
    } while (opcion != 5);  // si la opcion es cualquiera de las otras (1,2,3)

    return 0;
}



// Definiciones de funciones
void opcion1() {
    submenu1();

}
void submenu1(){
    cout << "_______________________________________________" << endl;
    cout<<"Has elegido, Partida Rápida"<<endl;
    cout<<"A) 4x4"<<endl;
    cout<<"B) 5x5"<<endl;
    cout<<"C) 6x6"<<endl;
    cout<<"D) 10x10"<<endl;
    cout << "_______________________________________________" << endl;
    char entrada;
    cout << "Ingresar opción:"<< endl;
    cin >> entrada;
    entrada = _toupper(entrada);
    while(entrada == 'A' || entrada == 'B' || entrada == 'C' || entrada == 'D'){
        if(entrada =='A'){
            cout<<"selecciono 4x4"<<endl;
            auto* board4 = new Board(4, 4);

            //board4->setId(entries++);
            board4->print();
            return;
        }
        if(entrada =='B'){
            cout<<"selecciono 5x5"<<endl;
            //hacer funcion de mpp 5x5
            auto* board5 = new Board(5, 5);
            board5->print();
            return;
        }
        if(entrada =='C'){
            cout<<"selecciono 6x6"<<endl;
            auto* board6 = new Board(6, 6);
            board6->generate_cell_distribution_(2,board6->getMpp());
            //board6->getMpp()->setValue(2,2,1);
            board6->setId(entries+1);
//            board6->print();
            board6->setStep(0);
            board6->print();
            board6->setStep(1);
            cout<<board6->getStep()<<endl;
            cout<<board6->getId()<<endl;


            return;
        }
        if(entrada =='D'){
            cout<<"selecciono 10x10"<<endl;
            auto* board10 = new Board(10, 10);
            board10->print();
            return;
        }
        if(entrada == '0')
            return;
    }

    cout<<"Ingrese una entrada Valida"<<endl;
}

void opcion2() {
    submenu2();
}
void submenu2(){
    cout << "_______________________________________________" << endl;
    cout << "Has elegido, Partida Personalizada." << endl;
    int largo = 0;
    int ancho = 0;

    try {
        while (largo < 4 || largo > 10) {
            cout << "¿Qué largo del tablero deseas?" << endl;
            cin >> largo;

            if (largo < 4 || largo > 10) {
                throw invalid_argument("El largo debe ser un número entero entre 4 y 10.");
            }
        }
        cout << "El largo se ha establecido en " << largo << "." << endl;

        while (ancho < 4 || ancho > 10) {
            cout << "¿Qué ancho del tablero deseas?" << endl;
            cin >> ancho;

            if (ancho < 4 || ancho > 10) {
                throw invalid_argument("El ancho debe ser un número entero entre 4 y 10.");
            }
        }
        cout << "El ancho se ha establecido en " << ancho << "." << endl;

        cout << "Ha elegido un tablero de " << largo << "x" << ancho << endl;
        auto* board = new Board(largo, ancho);
        board->getMpp()->print();
        //board->print();
        cout<<"Ingresar nueva celula? (s/n)"<<endl;
        string newcell;
        cin>>newcell;
        while(newcell != "N" && newcell != "n"){    //mientras que la entrada sea distinta de n o N

                try {

                    cout << "Ingresar coordenadas de la celula agregada" << endl;

                    int newx, newy;
                    cout << "x: ";
                    cin >> newx;
                    cout << "y: ";
                    cin >> newy;
                    if (newx > largo || newy > ancho) {
                        throw invalid_argument("Coordenadas fuera del tablero");
                    }
                    board->getMpp()->setValue(newx - 1, newy - 1, 1);
                    //board->print();
                } catch (const invalid_argument &e) {
                    cout << "Error: " << e.what() << endl;
                }
                board->getMpp()->print();

            cout<<"Ingresar nueva celula? (s/n)"<<endl;
            cin>>newcell;
            if(newcell == "n" || newcell == "N"){
                board->getMpp()->print();
                return;
            }
        }/*
        if(newcell == "s") {

            try {

                cout << "Ingresar coordenadas de la celula agregada" << endl;

                int newx, newy;
                cout << "x: ";
                cin >> newx;
                cout << "y: ";
                cin >> newy;
                if (newx > largo || newy > ancho) {
                    throw invalid_argument("Coordenadas fuera del tablero");
                }
                board->getMpp()->setValue(newx - 1, newy - 1, 1);
                //board->print();
            } catch (const invalid_argument &e) {
                cout << "Error: " << e.what() << endl;
            }
            board->print();
        }*/
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    } catch (...) {
        cout << "Error desconocido." << endl;
    }
}
void opcion3() {
    submenu3();
}

void submenu3(){
    cout << "_______________________________________________" << endl;
    cout << "Partida Pre-fabricada." << endl;
    //generar tablero aleatorio
    int filasRandom = rand()%10+3;
    int columnasRandom = rand()%10+3;
    cout <<" Se ha generado un tablero de "<<filasRandom<<"x"<<columnasRandom<<endl;
    new Board(filasRandom, columnasRandom);
    Board* board_r = new Board(filasRandom, columnasRandom);
    board_r->generate_cell_distribution_(5,board_r->getMpp());
    board_r->print();
    //board_r->update(1,1,1);
    cout << "_______________________________________________" << endl;

}



void opcion4() {
    submenu4();
}
void submenu4(){

    //leer el archivo de texto

    cout << "_______________________________________________" << endl;
    cout <<"*\t\tPuntuaciones\t\t*"<<endl;
    cout<<"Mayor Duración:"<<endl;
    cout<<"Tablero más grande"<<endl;
    Board::search_biggest_board();
    cout<<"Mayor Cantidad de células vivas"<<endl;
    cout<<"Mayor cantidad de células iniciales vivas"<<endl;
    cout<<"Extincion más rápida"<<endl;
    cout << "_______________________________________________" << endl;}
void opcion5(){
    submenu5();
}
void submenu5(){
    cout << "_______________________________________________" << endl;
    cout<<"Gracias por jugar"<<endl;
    for (int i = 3; i > 0; --i) {
        cout<<"Saliendo en "<<i<<" segundo(s)"<<endl;
        sleep(1);
    }
    cout<<"Hasta luego"<<endl;
    cout << "_______________________________________________" << endl;
}
int leerOpcion() {
    int opcion;
    bool esValido = false;
    do {
        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear(); // Limpiar los bits de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar la entrada inválida
            cout << "Entrada inválida. Intente de nuevo." << endl;
        } else {
            esValido = true;
        }
    } while (!esValido);

    return opcion;
}
string leerOpcion_str() {
    string opcion;
    bool esValido = false;
    do {
        cout << "Ingrese una opción: ";
        cin >> opcion;

        if (cin.fail()) {
            cin.clear(); // Limpiar los bits de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar la entrada inválida
            cout << "Entrada inválida. Intente de nuevo." << endl;
        } else {
            esValido = true;
        }
    } while (!esValido); /// do while, hacer mientras NO sea valido, seguir preguntando

    return opcion;  /// si logra salir del bucle, entonces la funcion retornará la opción seleccionada
    /// la cual apuntaría a la función que corresponde a la
}


