#include<iostream>
#include <iomanip>
#include "cuentaCorriente.h"
using namespace std;


// Método para retirar dinero
void CuentaCorriente::retirarDinero(double cantidad) {
    if (cantidad <= saldo) {
        saldo -= cantidad;
        cout << "Retiro exitoso. Nuevo saldo: $" << fixed << setprecision(2) << saldo << endl;
    } else {
        cout << "No hay suficiente saldo para realizar el retiro." << endl;
    }
}

// Método para ingresar dinero
void CuentaCorriente::ingresarDinero(double cantidad) {
    saldo += cantidad;
    cout << "Ingreso exitoso. Nuevo saldo: $" << fixed << setprecision(2) << saldo << endl;
}

// Método para consultar la cuenta
void CuentaCorriente::consultarCuenta() const {
    cout << "Datos de la cuenta:" << endl;
    cout << "Nombre: " << nombre << " " << apellido << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Teléfono: " << telefono << endl;
    cout << "Saldo: $" << fixed << setprecision(2) << saldo << endl;
}

// Método para verificar si el saldo está en números rojos
bool CuentaCorriente::saldoNegativo() const {
    return saldo < 0;
}

// Método para cambiar la clave
void CuentaCorriente::cambiarClave(string nuevaClave) {
    string claveAnterior;
    cout << "Ingrese la clave anterior: ";
    cin >> claveAnterior;
    if (claveAnterior == clave) {
        clave = nuevaClave;
        cout << "Clave cambiada exitosamente." << endl;
    } else {
        cout << "La clave anterior ingresada es incorrecta. No se pudo cambiar la clave." << endl;
    }
}


