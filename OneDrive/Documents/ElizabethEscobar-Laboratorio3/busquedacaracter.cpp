#include "busquedacaracter.h"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

busquedaCaracter::busquedaCaracter()
{
    string ubicacionArchivo = obtenerUbicacionArchivo();
    string busqueda = obtenerEntradaUsuario();

    ifstream archivo(ubicacionArchivo);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        contarOcurrencias(linea, busqueda);
    }

    archivo.close();

}





string busquedaCaracter::obtenerEntradaUsuario() {
    string busqueda;
    cout << "Ingrese el carácter o secuencia de texto a buscar: ";
    getline(cin, busqueda);
    return busqueda;
}

string busquedaCaracter::obtenerUbicacionArchivo() {
    string ubicacionArchivo;
    cout << "Ingrese la ubicación del archivo a leer (incluyendo la extensión .txt): ";
    getline(cin, ubicacionArchivo);
    return ubicacionArchivo;
}

void busquedaCaracter::contarOcurrencias(string texto, string busqueda) {
    size_t pos = texto.find(busqueda);
    int count = 0;

    while (pos != string::npos) {
        count++;
        pos = texto.find(busqueda, pos + 1);
    }

    if (count > 0) {
        cout << "La secuencia \"" << busqueda << "\" se repite " << count << " veces en el texto." << endl;
    }
}
