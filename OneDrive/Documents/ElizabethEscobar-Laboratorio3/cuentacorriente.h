#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <iostream>
using namespace std;

class CuentaCorriente
{
private:
    string nombre, apellido, direccion, telefono ;
    double saldo;


public:
    string getNombre(), getApellido(), getDireccion(), getTelefono();
    float retirarDinero(), ingresarDinero(),consultarCuenta(), saldoNegativo();
    void setNombre(string _nombre), setApellido(string _apellido), setDireccion(string _direccion),setTelefono(string _telefono);
    void retirarDinero();
    }

public:
    CuentaCorriente();
};

#endif // CUENTACORRIENTE_H
