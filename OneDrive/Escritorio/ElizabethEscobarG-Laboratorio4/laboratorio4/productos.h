#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include<iostream>
using namespace std;


class productos{
private:
    string nombre,marca;
    int precio, cantidadInventario;



public:
    void setNombre(string _nombre) , setMarca(string _marca);
    void setPrecio(int _precio), setCantidadInventario(int _cantidadInventario);


public:
    string getNombre() , getMarca();
    int getPrecio(), getCantidadInventario();

};
#endif // PRODUCTOS_H
