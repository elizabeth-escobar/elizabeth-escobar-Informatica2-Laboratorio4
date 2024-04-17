#ifndef BUSQUEDACARACTER_H
#define BUSQUEDACARACTER_H
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

class busquedaCaracter
{
public:
    busquedaCaracter();

private:
    string obtenerEntradaUsuario();
    string obtenerUbicacionArchivo();
    void contarOcurrencias(string texto, string busqueda);
};

#endif // BUSQUEDACARACTER_H
