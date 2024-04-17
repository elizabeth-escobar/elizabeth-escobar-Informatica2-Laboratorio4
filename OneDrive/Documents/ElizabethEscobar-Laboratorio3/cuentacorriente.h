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
    string getNombre() , getApellido(), getDireccion(), getTelefono();
    float retirarDinero, ingresarDinero,consultarCuenta, saldoNegativo;
    void setNombre(string _nombre), setApellido(string _apellido), setDireccion(string _direccion),setTelefono(string _telefono);
    void setRetirarDinero(double _retirarDinero), setIngresarDinero(double _ingresarDinero), setConsultarCuenta();


public:
    float getRetirarDinero() const;
    float getIngresarDinero() const;
    float getConsultarCuenta() const;
    float getSaldoNegativo() const;
    void setSaldoNegativo(float newSaldoNegativo);
    void calcularSaldo(double cantidad);
    double getSaldo() const;
    void setSaldo(double newSaldo);
    CuentaCorriente() : saldo(0.0) {}
};

#endif // CUENTACORRIENTE_H
