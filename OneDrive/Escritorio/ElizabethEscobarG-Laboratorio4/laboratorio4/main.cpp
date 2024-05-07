#include <iostream>
#include<productos.h>
#include<cuentaCorriente.h>
#include<compra.h>
#include<productos.cpp>

using namespace std;

// Definición de la constante para el tamaño máximo de productos
//const int MAX_PRODUCTOS = 1000;


// Constantes para los archivos CSV de cada categoría
const string archivoComestibles = "productos_comestibles.csv";
const string archivoElectronicos = "productos_electronicos.csv";
const string archivoAseo = "productos_aseo.csv";

// Función para mostrar los productos de una categoría específica
void mostrarProductos(string archivoCSV) {
    cout << "\n::::::::::PRODUCTOS::::::::::" << endl;
    ifstream archivo(archivoCSV);
    if (!archivo) {
        cout << "Error al abrir el archivo: " << archivoCSV << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

// Función para modificar los productos de una categoría específica
void modificarProductos(string archivoCSV) {
    ifstream archivoEntrada(archivoCSV);
    if (!archivoEntrada) {
        cout << "Error al abrir el archivo: " << archivoCSV << endl;
        return;
    }

    // Mostrar los productos disponibles
    cout << "\nProductos disponibles:" << endl;
    string linea;
    int contador = 1;
    while (getline(archivoEntrada, linea)) {
        cout << contador++ << ". " << linea << endl;
    }
    archivoEntrada.close();

    // Solicitar al usuario el número del producto a modificar
    int numeroProducto;
    cout << "\nIngrese el número del producto a modificar: ";
    cin >> numeroProducto;

    // Abrir el archivo en modo escritura para modificar el producto seleccionado
    ofstream archivoSalida(archivoCSV);
    if (!archivoSalida) {
        cout << "Error al abrir el archivo: " << archivoCSV << endl;
        return;
    }

    archivoEntrada.open(archivoCSV);
    contador = 1;
    while (getline(archivoEntrada, linea)) {
        if (contador == numeroProducto) {
            // Mostrar los detalles del producto seleccionado
            cout << "\nProducto seleccionado: " << linea << endl;
            // Solicitar al usuario los nuevos datos del producto
            string nuevoProducto;
            cout << "Ingrese los nuevos detalles del producto (nombre, marca, precio, descuento, etc.): ";
            cin.ignore(); // Limpiar el buffer de entrada
            getline(cin, nuevoProducto);
            // Escribir el nuevo producto en el archivo
            archivoSalida << nuevoProducto << endl;
            cout << "Producto modificado exitosamente." << endl;
        } else {
            // Escribir el producto sin cambios en el archivo
            archivoSalida << linea << endl;
        }
        contador++;
    }
    archivoEntrada.close();
    archivoSalida.close();
}

int main() {
    int opcion;

    do {
        cout << "\n::::::::::MENU PRINCIPAL::::::::::" << endl;
        cout << "1. Ver productos comestibles" << endl;
        cout << "2. Ver productos electrónicos" << endl;
        cout << "3. Ver productos de aseo" << endl;
        cout << "4. Modificar productos comestibles" << endl;
        cout << "5. Modificar productos electrónicos" << endl;
        cout << "6. Modificar productos de aseo" << endl;
        cout << "7. Realizar compra" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarProductos(archivoComestibles);
                break;
            case 2:
                mostrarProductos(archivoElectronicos);
                break;
            case 3:
                mostrarProductos(archivoAseo);
                break;
            case 4:
                modificarProductos(archivoComestibles);
                break;
            case 5:
                modificarProductos(archivoElectronicos);
                break;
            case 6:
                modificarProductos(archivoAseo);
                break;
            case 7:
                cout << "Funcionalidad de realizar compra aún no implementada." << endl;
                break;
            case 8:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != 8);

    return 0;
}
