#include "cuentacorriente.h"


double CuentaCorriente::getSaldo() const
{
    return saldo;
}


string CuentaCorriente::getNombre(){
    return nombre;
}

string CuentaCorriente::getApellido(){
    return apellido;
}

string CuentaCorriente::getDireccion(){
    return direccion;
}

string CuentaCorriente::getTelefono(){
    return telefono;
}

float CuentaCorriente::getSaldoNegativo() const
{
    return saldo < 0;
}

/*void CuentaCorriente::setSaldoNegativo(float newSaldoNegativo)
{
    saldoNegativo = newSaldoNegativo;
}*/

float CuentaCorriente::getConsultarCuenta() const
{
    return consultarCuenta;
}

float CuentaCorriente::getIngresarDinero() const
{
    return ingresarDinero;
}

float CuentaCorriente::getRetirarDinero() const
{
    return retirarDinero;
}

//Metodos

void CuentaCorriente::setNombre(string _nombre){
    nombre = _nombre;
}

void CuentaCorriente::setApellido(string _apellido){
    apellido = _apellido;
}

void CuentaCorriente::setDireccion(string _direccion){
    direccion = _direccion;
}

void CuentaCorriente::setTelefono(string _telefono){
    telefono = _telefono;
}

void CuentaCorriente::setSaldo(double newSaldo) {
    saldo = newSaldo;
}

void CuentaCorriente::calcularSaldo(double cantidad) {
    saldo += cantidad;
}

/*void CuentaCorriente::setConsultarCuenta() {
    saldo;
}*/

void CuentaCorriente::setIngresarDinero(double cantidad) {
    saldo += cantidad;
}

void CuentaCorriente::setRetirarDinero(double cantidad) {
    saldo -= cantidad;
}
