#include <iostream>
#include "cuentacorriente.h"
using namespace std;

class cuentacorriente{

};

int main()
{
    CuentaCorriente cuentaEE;
    cuentaEE.setNombre("");
    cuentaEE.setApellido("");
    cuentaEE.setDireccion("");
    cuentaEE.setTelefono("");
    cuentaEE.setSaldo(8.0);
    cout << "El nombre del cliente es" << cuentaEE.getNombre()<<endl;
    return 0;
}
