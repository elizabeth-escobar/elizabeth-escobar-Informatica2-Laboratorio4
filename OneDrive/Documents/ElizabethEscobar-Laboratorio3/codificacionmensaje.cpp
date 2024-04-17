#include "codificacionmensaje.h"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;


void codificacionMensaje::codificarMensaje() {
    string archivoOrigen, archivoFinal, ubicacionCodificacion;
    char opcion;

    cout << "Ingrese la ubicación y nombre del archivo origen: ";
    getline(cin, archivoOrigen);

    cout << "Ingrese la ubicación y nombre del archivo final: ";
    getline(cin, archivoFinal);

    cout << "Seleccione el método de codificación (por defecto o por documento): ";
    cin >> opcion;

    map<char, char> codificacion;
    if (opcion == 'd' || opcion == 'D') {
        cout << "Ingrese la ubicación y nombre del archivo de codificación: ";
        getline(cin, ubicacionCodificacion);
        codificacion = obtenerMapaCodificacion(ubicacionCodificacion);
    } else {
        // Codificación por defecto
        codificacion['a'] = 'b';
        codificacion['b'] = 'c';
        codificacion['c'] = 'd';
        codificacion['d'] = 'e';
        codificacion['e'] = 'f';
        codificacion['f'] = 'g';
        codificacion['g'] = 'h';
        codificacion['h'] = 'i';
        codificacion['i'] = 'j';
        codificacion['j'] = 'k';
        codificacion['k'] = 'l';
        codificacion['l'] = 'm';
        codificacion['m'] = 'n';
        codificacion['n'] = 'o';
        codificacion['o'] = 'p';
        codificacion['p'] = 'q';
        codificacion['q'] = 'r';
        codificacion['r'] = 's';
        codificacion['s'] = 't';
        codificacion['t'] = 'u';
        codificacion['u'] = 'v';
        codificacion['v'] = 'w';
        codificacion['w'] = 'x';
        codificacion['x'] = 'y';
        codificacion['y'] = 'z';
        codificacion['z'] = 'a';

    }

    ifstream archivoEntrada(archivoOrigen);
    if (!archivoEntrada.is_open()) {
        cout << "No se pudo abrir el archivo de origen." << endl;
        return;
    }

    ofstream archivoSalida(archivoFinal);
    if (!archivoSalida.is_open()) {
        cout << "No se pudo abrir el archivo final." << endl;
        return;
    }

    char caracter;
    while (archivoEntrada.get(caracter)) {
        if (isalpha(caracter)) {
            caracter = tolower(caracter);
            if (codificacion.find(caracter) != codificacion.end()) {
                caracter = codificacion[caracter];
            }
        }
        archivoSalida << caracter;
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "El mensaje ha sido codificado exitosamente." << endl;
}

void codificacionMensaje::decodificarMensaje() {
    string archivoOrigen, archivoFinal, ubicacionCodificacion;
    char opcion;

    cout << "Ingrese la ubicacion y nombre del archivo origen: ";
    getline(cin, archivoOrigen);

    cout << "Ingrese la ubicacion y nombre del archivo final: ";
    getline(cin, archivoFinal);

    cout << "Seleccione el metodo de codificacion (por defecto o por documento): ";
    cin >> opcion;

    map<char, char> decodificacion;
    if (opcion == 'd' || opcion == 'D') {
        cout << "Ingrese la ubicacion y nombre del archivo de codificacion: ";
        getline(cin, ubicacionCodificacion);
        decodificacion = obtenerMapaCodificacion(ubicacionCodificacion);
    } else {
    decodificacion['a'] = 'z';
    decodificacion['b'] = 'a';
    decodificacion['c'] = 'b';
    decodificacion['d'] = 'c';
    decodificacion['e'] = 'd';
    decodificacion['f'] = 'e';
    decodificacion['g'] = 'f';
    decodificacion['h'] = 'g';
    decodificacion['i'] = 'h';
    decodificacion['j'] = 'i';
    decodificacion['k'] = 'j';
    decodificacion['l'] = 'k';
    decodificacion['m'] = 'l';
    decodificacion['n'] = 'm';
    decodificacion['o'] = 'n';
    decodificacion['p'] = 'o';
    decodificacion['q'] = 'p';
    decodificacion['r'] = 'q';
    decodificacion['s'] = 'r';
    decodificacion['t'] = 's';
    decodificacion['u'] = 't';
    decodificacion['v'] = 'u';
    decodificacion['w'] = 'v';
    decodificacion['x'] = 'w';
    decodificacion['y'] = 'x';
    decodificacion['z'] = 'y';
    }
    ifstream archivoEntrada(archivoOrigen);
    if (!archivoEntrada.is_open()) {
        cout << "No se pudo abrir el archivo de origen." << endl;
        return;
    }

    ofstream archivoSalida(archivoFinal);
    if (!archivoSalida.is_open()) {
        cout << "No se pudo abrir el archivo final." << endl;
        return;
    }

    char caracter;
    while (archivoEntrada.get(caracter)) {
        if (isalpha(caracter)) {
            caracter = tolower(caracter);
            if (decodificacion.find(caracter) != decodificacion.end()) {
                caracter = decodificacion[caracter];
            }
        }
        archivoSalida << caracter;
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "El mensaje ha sido codificado exitosamente." << endl;
}



map<char, char> codificacionMensaje::obtenerMapaCodificacion(string ubicacionArchivo) {
    map<char, char> codificacion;
    ifstream archivoCodificacion(ubicacionArchivo);
    if (!archivoCodificacion.is_open()) {
        cout << "No se pudo abrir el archivo de codificación." << endl;
        return codificacion;
    }

    char clave, valor;
    while (archivoCodificacion >> clave >> valor) {
        codificacion[clave] = valor;
    }

    archivoCodificacion.close();
    return codificacion;
}
