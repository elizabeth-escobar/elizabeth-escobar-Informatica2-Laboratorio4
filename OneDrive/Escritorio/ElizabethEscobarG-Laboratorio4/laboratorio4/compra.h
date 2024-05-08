#ifndef COMPRA_H
#define COMPRA_H
#include <iostream>
#include <string>
#include "cuentaCorriente.h"

using namespace std;

class compra{
private:
    struct ProductoCarrito {
        string nombre;
        int cantidad;
        int precioUnitario;
    };

    ProductoCarrito carrito[100]; // Suponiendo que como máximo habrá 100 productos en el carrito
    int cantidadProductosCarrito;

public:
    compra(); // Constructor
    void agregarProducto(string nombre, int cantidad, int precioUnitario);
    void imprimirRecibo();
    void aplicarCargo(CuentaCorriente& cuenta);
};
#endif // COMPRA_H
