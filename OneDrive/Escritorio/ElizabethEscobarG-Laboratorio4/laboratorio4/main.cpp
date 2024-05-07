#include <iostream>
#include<productos.h>
#include<cuentaCorriente.h>
#include<compra.h>
#include<productos.cpp>

using namespace std;

// Definición de la constante para el tamaño máximo de productos
const int MAX_PRODUCTOS = 1000;
/*cout << "::::::::::MENU PRINCIPAL::::::::::" << endl;
cout << "1.Productos" << endl;
cout << "2.Modificar nombres, precios o % descuento" << endl;
cout << "3.Realizar compra" << endl;
int opcion =0 ;
cin>>opcion;
switch(opcion){

}*/



int main() {
    // Arreglo para almacenar punteros a productos
    productos* listaProductos[MAX_PRODUCTOS];
    int numProductos = 0;

    // Rutas de los archivos CSV
    string archivoComestibles = "productos_comestibles.csv";
    string archivoElectronicos = "productos_electronicos.csv";
    string archivoAseo = "productos_aseo.csv";

    // Cargar los productos desde los archivos CSV
    //cargarProductosDesdeCSV(archivoComestibles, archivoElectronicos, archivoAseo, listaProductos, numProductos);

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
}


