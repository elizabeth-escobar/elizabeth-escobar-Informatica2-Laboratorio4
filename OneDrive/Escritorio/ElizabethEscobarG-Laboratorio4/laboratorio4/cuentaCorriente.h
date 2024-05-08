#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <iostream>
#include<cuentaCorriente.cpp>
using namespace std;

class CuentaCorriente
{
private:
    string nombre, apellido, direccion, telefono,clave ;
    double saldo;
    int idCliente;


public:
        void setNombre(string _nombre){
            nombre = _nombre;
        }

        string getNombre(){
            return nombre;
        }

        void setApellido(string _apellido){
            apellido = _apellido;
        }

        string getApellido(){
            return apellido;
        }

        void setTelefono(string _telefono){
            telefono = _telefono;
        }

        string getTelefono(){
            return telefono;
        }

        void setIdCliente(int _idCliente){
            idCliente= _idCliente;
        }

        int getIdCliente(){
            return idCliente;
        }

        void setClave(int _clave){
            clave = _clave;
        }

        string getClave(){
            return clave;
        }



        CuentaCorriente() : saldo(0.0) {}



        CuentaCorriente(string _nombre,string _apellido,string _telefono, int _idCliente, int _clave){
            nombre = _nombre;
            apellido =_apellido;
            telefono = _telefono;
            idCliente = _idCliente;
            clave = _clave;

        }


        void ingresarDinero(double cantidad);
        void retirarDinero(double cantidad);
        void consultarCuenta() const;
        bool saldoNegativo() const;
        void cambiarClave(string nuevaClave);



};

#endif // CUENTACORRIENTE_H


