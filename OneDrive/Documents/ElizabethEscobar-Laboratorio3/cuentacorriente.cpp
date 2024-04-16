#include "cuentacorriente.h"

CuentaCorriente::CuentaCorriente()
{

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

/*void CuentaCorriente::retirarDinero(){
    float saldoActual= saldoActual - candidadIndicada;
    cout<<""<<endl;
    cout saldoActual<<endl;
}*/
