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
    void setRetirarDinero(float _retirarDinero), setIngresarDinero(float _ingresarDinero), setConsultarCuenta(float _consultarCuenta);


public:
    float getRetirarDinero() const;
    float getIngresarDinero() const;
    float getConsultarCuenta() const;
    float getSaldoNegativo() const;
    void setSaldoNegativo(float newSaldoNegativo);
    void calcularSaldo(float cantidad);
    double getSaldo() const;
    void setSaldo(double newSaldo);
};

#endif // CUENTACORRIENTE_H
