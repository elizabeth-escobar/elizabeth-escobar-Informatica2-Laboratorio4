#include <iostream>
#include <fstream>
#include <sstream>
#include<productos.h>
#include<cuentaCorriente.h>
#include<compra.h>
#include<productos.cpp>
#include<compra.cpp>
#include <limits>

using namespace std;

// Definición de la constante para el tamaño máximo de productos
const int MAX_PRODUCTOS = 1000;


// Constantes para los archivos CSV de cada categoría
const string archivoComestibles = "productos_comestibles.csv";
const string archivoElectronicos = "productos_electronicos.csv";
const string archivoAseo = "productos_aseo.csv";

// Función para mostrar los productos de una categoría específica
void mostrarProductos(string archivoCSV) {
    cout << "\n::::::::::PRODUCTOS::::::::::" << endl;
    cout << "Intentando abrir el archivo: " << archivoCSV << endl;

    ifstream archivo(archivoCSV);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo: " << archivoCSV << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string campo;
        while (getline(ss, campo, ',')) {
            cout << campo << "\t";
        }
        cout << endl;
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

    // Solicitar al usuario el numero del producto a modificar
    int numeroProducto;
    cout << "\nIngrese el numero del producto a modificar: ";
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
            // Solicitar al usuario los nuºevos datos del producto
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




void realizarCompra(productos* listaProductos[], int numProductos, CuentaCorriente& cuenta) {
    compra carritoCompra;

    bool seguirComprando = true;
    while (seguirComprando) {
        cout << "\nPRODUCTOS DISPONIBLES:" << endl;
        for (int i = 0; i < numProductos; ++i) {
            cout << i + 1 << ". " << listaProductos[i]->getNombre() << " - $" << listaProductos[i]->getPrecio() << " - Cantidad disponible: " << listaProductos[i]->getCantidadInventario() << endl;
        }

        int opcionProducto, cantidad;
        cout << "\nSeleccione un producto para agregar al carrito (0 para finalizar la compra): ";
        cin >> opcionProducto;

        if (opcionProducto == 0) {
            seguirComprando = false;
            continue;
        }

        opcionProducto--; // Ajustar al índice del arreglo

        if (opcionProducto < 0 || opcionProducto >= numProductos) {
            cout << "Opción inválida." << endl;
            continue;
        }

        cout << "Ingrese la cantidad que desea comprar: ";
        cin >> cantidad;

        if (cantidad <= 0) {
            cout << "Cantidad inválida." << endl;
            continue;
        }

        if (cantidad > listaProductos[opcionProducto]->getCantidadInventario()) {
            cout << "No hay suficiente cantidad en el inventario." << endl;
            continue;
        }

        // Agregar el producto al carrito de compras
        carritoCompra.agregarProducto(listaProductos[opcionProducto]->getNombre(), cantidad, listaProductos[opcionProducto]->getPrecio());
        listaProductos[opcionProducto]->setCantidadInventario(listaProductos[opcionProducto]->getCantidadInventario() - cantidad);
        cout << "Producto agregado al carrito." << endl;

        // Limpiar el buffer de entrada para evitar problemas con cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    carritoCompra.aplicarCargo(cuenta);

    // Imprimir el recibo
    carritoCompra.imprimirRecibo();
}




int main() {
    int opcion;
    // Declarar e inicializar listaProductos y numProductos
        productos* listaProductos[MAX_PRODUCTOS];
        CuentaCorriente cuentaCorriente;
        int numProductos = 0;

    do {
        cout << "\n::::::::::MENU PRINCIPAL::::::::::" << endl;
        cout << "1. Ver productos comestibles" << endl;
        cout << "2. Ver productos electronicos" << endl;
        cout << "3. Ver productos de aseo" << endl;
        cout << "4. Modificar productos comestibles" << endl;
        cout << "5. Modificar productos electronicos" << endl;
        cout << "6. Modificar productos de aseo" << endl;
        cout << "7. Realizar compra" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese su opcion: ";
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
                realizarCompra(listaProductos, numProductos, cuentaCorriente);
                break;
            case 8:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, seleccione una opción valida." << endl;
                break;
        }
    } while (opcion != 8);

    return 0;
}
