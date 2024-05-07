#include<iostream>
#include<compra.h>
#include<productos.h>
using namespace std;




// Función para realizar la compra
void realizarCompra(productos* listaProductos[], int numProductos) {
    struct ProductoCarrito {
        string nombre;
        int cantidad;
        int precioUnitario;
    };

    ProductoCarrito carrito[100]; // Suponiendo que como máximo habrá 100 productos en el carrito
    int cantidadProductosCarrito = 0;
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

        // Agregar el producto al carrito
        carrito[cantidadProductosCarrito++] = {listaProductos[opcionProducto]->getNombre(), cantidad, listaProductos[opcionProducto]->getPrecio()};
        listaProductos[opcionProducto]->setCantidadInventario(listaProductos[opcionProducto]->getCantidadInventario() - cantidad);
        cout << "Producto agregado al carrito." << endl;
    }

    // Imprimir el recibo
    cout << "\nRECIBO DE COMPRA:" << endl;
    double totalCompra = 0;
    for (int i = 0; i < cantidadProductosCarrito; ++i) {
        double subtotal = carrito[i].cantidad * carrito[i].precioUnitario;
        cout << carrito[i].nombre << " - Cantidad: " << carrito[i].cantidad << " - Precio unitario: $" << carrito[i].precioUnitario << " - Subtotal: $" << subtotal << endl;
        totalCompra += subtotal;
    }
    cout << "TOTAL: $" << totalCompra << endl;
}
