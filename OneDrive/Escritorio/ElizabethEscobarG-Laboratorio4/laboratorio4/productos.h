#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include<iostream>
using namespace std;


class productos{
private:
    string nombre,marca;
    int precio, cantidadInventario, descuento;



public:
    void setNombre(string _nombre){
        nombre = _nombre;
    }

    string getNombre(){
        return nombre;
    }

    void setMarca(string _marca){
        marca = _marca;
    }

    string getMarca(){
        return marca;

    }

    void setPrecio(int _precio){
        precio = _precio;
    }

    int getPrecio(){
        return precio;
    }

    void setCantidadInventario(int _cantidadInventario){
        cantidadInventario = _cantidadInventario;
    }

    int getCantidadInventario(){
        return cantidadInventario;
    }

    void setDecuento(int _descuento){
        descuento = _descuento;
    }

    int getDescuento(){
        return descuento;
    }



    productos(string _nombre,string _marca,int _precio,int _cantidadInventario,int _descuento){
        nombre = _nombre;
        marca =_marca;
        precio = _precio;
        cantidadInventario = _cantidadInventario;
        descuento = _descuento;
    }
};

class comestibles:public productos{
private:
    int mesVencimiento;
    int anioVencimiento;

public:

    void setMesVencimiento(int _mesVencimiento){
        mesVencimiento = _mesVencimiento;
    }

    int getMesVencimiento(){
        return mesVencimiento;
    }
    void setAnioVencimiento(int _anioVencimiento){
        anioVencimiento = _anioVencimiento;
    }

    int getAnioVencimiento(){
        return anioVencimiento;
    }

    comestibles(string nombre,string marca,int precio,int cantidadInventario,int descuento,int _mesVencimiento, int _anioVencimiento)
        :productos(nombre,marca,precio,cantidadInventario,descuento){

        mesVencimiento =_mesVencimiento;
        anioVencimiento = _anioVencimiento;

    }

};



class electronicos:public productos{
private:
    int garantia;


public:

    void setGarantia(int _garantia){
        garantia = _garantia;
    }

    int getGarantia(){
        return garantia;
    }

    electronicos(string nombre,string marca,int precio,int cantidadInventario,int descuento,int _garantia)
        :productos(nombre,marca,precio,cantidadInventario,descuento){

        garantia =_garantia;

    }

};


class aseo:public productos{
private:
    string material;


public:

    void setMaterial(string _material){
        material = _material;
    }

    string getMaterial(){
        return material;
    }

    aseo(string nombre,string marca,int precio,int cantidadInventario,int descuento,string _material)
        :productos(nombre,marca,precio,cantidadInventario,descuento){

        material =_material;

    }

    int cargarProductosDesdeCSV(productos* listaProductos[], int& numProductos);

};











#endif // PRODUCTOS_H
