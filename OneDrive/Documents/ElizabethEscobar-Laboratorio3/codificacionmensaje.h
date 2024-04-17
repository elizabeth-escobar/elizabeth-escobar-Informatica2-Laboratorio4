#ifndef CODIFICACIONMENSAJE_H
#define CODIFICACIONMENSAJE_H
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;


class codificacionMensaje
{

public:
    codificacionMensaje();
    void codificarMensaje(),  decodificarMensaje();

private:
    map<char, char> obtenerMapaCodificacion(string ubicacionArchivo);
};

#endif // CODIFICACIONMENSAJE_H
