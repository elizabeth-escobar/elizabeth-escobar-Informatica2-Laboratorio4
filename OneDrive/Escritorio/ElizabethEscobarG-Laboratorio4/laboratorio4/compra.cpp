#include<iostream>
#include<compra.h>
#include<productos.h>
using namespace std;



compra::compra() {
    cantidadProductosCarrito = 0;
}

void compra::agregarProducto(string nombre, int cantidad, int precioUnitario) {
    if (cantidadProductosCarrito < 100) { // Verificar que haya espacio en el carrito
        carrito[cantidadProductosCarrito++] = {nombre, cantidad, precioUnitario};
    } else {
        cout << "El carrito está lleno. No se puede agregar más productos." << endl;
    }
}

void compra::aplicarCargo(CuentaCorriente& cuenta) {
    double totalCompra = 0;
    for (int i = 0; i < cantidadProductosCarrito; ++i) {
        totalCompra += carrito[i].cantidad * carrito[i].precioUnitario;
    }
    cuenta.retirarDinero(-totalCompra);
}




void compra::imprimirRecibo() {
    cout << "\nRECIBO DE COMPRA:" << endl;
    double totalCompra = 0;
    for (int i = 0; i < cantidadProductosCarrito; ++i) {
        double subtotal = carrito[i].cantidad * carrito[i].precioUnitario;
        cout << carrito[i].nombre << " - Cantidad: " << carrito[i].cantidad << " - Precio unitario: $" << carrito[i].precioUnitario << " - Subtotal: $" << subtotal << endl;
        totalCompra += subtotal;
    }
    cout << "TOTAL: $" << totalCompra << endl;
}
