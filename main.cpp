#include <iostream>
#include <limits>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <csignal>


#include "MPP.h"

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
int main() {

    MPP mpp(5, 5);
    mpp.print();

    lectura(); //solo sucede una vez


    void (*opciones[])() = {opcion1, opcion2, opcion3, opcion4,opcion5};

    int opcion;
    do {
        // Mostrar el menú
        cout << "Juego de la Vida de Conway" << endl;
        cout << "1) Partida Rápida" << endl;
        cout << "2) Partida Personalizada" << endl;
        cout << "3) Partida Pre-fabricada" << endl;
        cout << "4) Puntuaciones" << endl;
        cout << "5) ¿Salir?" << endl;
        opcion = leerOpcion();

        // Verificar que la opción sea válida si es mayor 1 tampien puede ser menor que 4
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
cout<<"Has elegido, Partida Rápida"<<endl;
    cout<<"A) 4x4"<<endl;
    cout<<"B) 5x5"<<endl;
    cout<<"C) 6x6"<<endl;
    cout<<"D) 10x10"<<endl;
    char entrada;
    cout << "Ingresar opción:"<< endl;
    cin >> entrada;
    entrada = _toupper(entrada);
    while(entrada == 'A' || entrada == 'B' || entrada == 'C' || entrada == 'D'){
        if(entrada =='A'){
            cout<<"selecciono 4x4"<<endl;
            MPP mpp(4, 4);
            mpp.print();
            return;
        }
        if(entrada =='B'){
            cout<<"selecciono 5x5"<<endl;
            //hacer funcion de mpp 5x5
            MPP mpp(5, 5);
            mpp.print();
            return;
        }
        if(entrada =='C'){
            cout<<"selecciono 6x6"<<endl;
            //hacer funcion de mpp 6x6
            MPP mpp(6, 6);
            mpp.print();

            return;
        }
        if(entrada =='D'){
            cout<<"selecciono 10x10"<<endl;
            //hacer funcion de mpp 10x10
            MPP mpp(10, 10);
            mpp.print();
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
    cout << "Has elegido, Partida Personalizada." << endl;
    int largo;
    int ancho;

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
        MPP mpp(largo, ancho);
        mpp.print();
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    } catch (...) {
        cout << "Error desconocido." << endl;
    }
}
void opcion3() {
    cout << "Partida Pre-fabricada." << endl;
}


void opcion4() {
    submenu4();
}
void submenu4(){
    cout << "______________________________" << endl;
    cout <<"*\t\tPuntuaciones\t\t*"<<endl;
    cout<<"Mayor Duración:"<<endl;
    cout<<"Tablero más grande"<<endl;
    cout<<"Mayor Cantidad de células vivas"<<endl;
    cout<<"Mayor cantidad de células iniciales vivas"<<endl;
    cout<<"Extincion más rápida"<<endl;
    cout << "______________________________" << endl;
}
void opcion5(){
    submenu5();
}
void submenu5(){
    cout<<"Gracias por jugar"<<endl;
//El sistema debe esperar 3 segundos antes de salir
    for (int i = 3; i > 0; --i) {
        cout<<"Saliendo en "<<i<<" segundo(s)"<<endl;
        sleep(1);
    }
    cout<<"Hasta luego"<<endl;
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
    } while (!esValido); /// do while, hacer mientras NO sea valido, seguir preguntando

    return opcion;  /// si logra salir del bucle, entonces la funcion retornará la opción seleccionada
    /// la cual apuntaría a la función que corresponde a la
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

int lectura() {
    // Abrir el archivo
    ifstream archivo("datos.txt");

    // Verificar si se abrió correctamente
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    // Leer los datos del archivo
    string linea;
    while (!archivo.eof()) {
        getline(archivo, linea);
        string nombre, rut, nota1str, nota2str, nota3str;
        float nota1, nota2, nota3;
        stringstream lector_linea(linea);
        // Mostrar los datos en pantalla
        getline(archivo, nombre, ',');
        getline(archivo, rut, ',');
        getline(archivo, nota1str, ',');
        getline(archivo, nota2str, ',');
        getline(archivo, nota3str, ',');

        nota1 = stof(nota1str);
        nota2 = stof(nota2str);
        nota3 = stof(nota3str);
        // Cerrar el archivo
        archivo.close();

        return 0;
    }

}
void testing(){
}

