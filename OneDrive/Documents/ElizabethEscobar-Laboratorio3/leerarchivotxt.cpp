#include "leerarchivotxt.h"
using namespace std;

/*leerArchivo::leerArchivo()
{*/




void leerArchivo::escribirArchivo() {
    string nombreArchivo, texto, opcion;

    cout << "Ingrese la ubicación del archivo a escribir (incluyendo la extensión .txt): ";
    cin >> nombreArchivo;

    ofstream archivo(nombreArchivo, ios::app); // Abre el archivo en modo de añadir al final

    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    do {
        cout << "Ingrese el texto a escribir en el archivo: ";
        cin.ignore(); // Limpiar el buffer de entrada
        getline(cin, texto);

        archivo << texto << endl; // Escribir el texto en el archivo

        cout << "¿Desea escribir más texto en el archivo? (si/no): ";
        cin >> opcion;
    } while (opcion == "si");

    archivo.close();
    cout << "Se ha escrito el texto en el archivo exitosamente." << endl;
}

void leerArchivo::lecturaArchivo() {
    string nombreArchivo, linea;

    cout << "Ingrese la ubicación del archivo a leer (incluyendo la extensión .txt): ";
    cin >> nombreArchivo;

    ifstream archivo(nombreArchivo); // Abre el archivo en modo de lectura

    if (!archivo.is_open()) {
        cout << "No se pudo encontrar el archivo." << endl;
        return;
    }

    cout << "Contenido del archivo:" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl; // Muestra el contenido del archivo línea por línea
    }

    archivo.close();
}
