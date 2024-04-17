#include "cuentacorriente.h"

CuentaCorriente::CuentaCorriente()
{

}

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
    return saldoNegativo;
}


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

void CuentaCorriente::calcularSaldo(float cantidad){
    saldo = saldo-cantidad;
}

/*void CuentaCorriente::retirarDinero(){
    float saldoActual= saldoActual - candidadIndicada;
    cout<<""<<endl;
    cout saldoActual<<endl;
}*/
