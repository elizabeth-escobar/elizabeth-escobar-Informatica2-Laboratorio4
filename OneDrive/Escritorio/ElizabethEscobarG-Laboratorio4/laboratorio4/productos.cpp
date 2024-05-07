#include<iostream>
#include<productos.h>
#include <fstream>
#include <sstream>
using namespace std;

/*Tipo producto (comestibles, electroinico ,aseo)
 Nombre
 Marca
 Precio
 Descuento
 Cantidad en el inventario
 Fecha de vencimiento (Mes y anio)
*/




// Función para cargar productos desde archivos CSV específicos para cada categoría
int cargarProductosDesdeCSV(string archivoComestibles, string archivoElectronicos, string archivoAseo, productos* listaProductos[], int& numProductos) {
    int totalProductos = 0;

    // Función interna para cargar productos de un archivo CSV
    auto cargarProductos = [&](string archivoCSV) {
        ifstream archivo(archivoCSV);
        string linea;

        // Leer el archivo línea por línea
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            string nombre, marca, tipo, material;
            int precio, cantidadInventario, descuento, mesVencimiento, anioVencimiento, garantia;

            // Parsear los datos de la línea
            getline(ss, nombre, ',');
            getline(ss, marca, ',');
            getline(ss, tipo, ',');
            ss >> precio;
            ss.ignore(); // Ignorar la coma
            ss >> cantidadInventario;
            ss.ignore();
            ss >> descuento;

            // Dependiendo del tipo de producto, leer los datos adicionales y crear el objeto correspondiente
            if (tipo == "comestible") {
                ss.ignore(); // Ignorar la coma
                ss >> mesVencimiento;
                ss.ignore();
                ss >> anioVencimiento;
                listaProductos[totalProductos++] = new comestibles(nombre, marca, precio, cantidadInventario, descuento, mesVencimiento, anioVencimiento);
            } else if (tipo == "electronicos") {
                ss.ignore(); // Ignorar la coma
                ss >> garantia;
                listaProductos[totalProductos++] = new electronicos(nombre, marca, precio, cantidadInventario, descuento, garantia);
            } else if (tipo == "aseo") {
                ss.ignore(); // Ignorar la coma
                getline(ss, material, ',');
                listaProductos[totalProductos++] = new aseo(nombre, marca, precio, cantidadInventario, descuento, material);
            }
        }

        archivo.close();
    };

    // Cargar productos de cada archivo CSV
    cargarProductos(archivoComestibles);
    cargarProductos(archivoElectronicos);
    cargarProductos(archivoAseo);

    // Actualizar el número total de productos
    numProductos = totalProductos;

    // Devolver el número total de productos cargados
    return totalProductos;
}

// Ejemplo de uso
/*int main() {
    // Arreglo para almacenar punteros a productos
    productos* listaProductos[MAX_PRODUCTOS];
    int numProductos = 0;

    // Rutas de los archivos CSV
    string archivoComestibles = "productos_comestibles.csv";
    string archivoElectronicos = "productos_electronicos.csv";
    string archivoAseo = "productos_aseo.csv";

    // Cargar los productos desde los archivos CSV
    cargarProductosDesdeCSV(archivoComestibles, archivoElectronicos, archivoAseo, listaProductos, numProductos);

    // Ahora puedes manipular la lista de productos como desees

    // Recorrer y mostrar los productos
    for (int i = 0; i < numProductos; ++i) {
        cout << "Nombre: " << listaProductos[i]->getNombre() << ", Marca: " << listaProductos[i]->getMarca() << ", Precio: " << listaProductos[i]->getPrecio() << endl;
    }

    // Liberar la memoria de los productos creados dinámicamente
    for (int i = 0; i < numProductos; ++i) {
        delete listaProductos[i];
    }

    return 0;
}*/
