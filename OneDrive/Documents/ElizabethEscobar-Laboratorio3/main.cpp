#include <iostream>
#include "cuentacorriente.h"
using namespace std;

class cuentacorriente{

};



void menu() {
    cout << ":::::::Menu Principal:::::::" << endl;
    cout << "Seleccione una opción:" << endl;
    cout << "1 ***Ejercicio1 cuenta corriente*** " << endl;
    cout << "2 ***Ejercicio2 cuenta corriente*** " << endl;
    cout << "3 ***Ejercicio3 cuenta corriente*** " << endl;
    cout << "4 ***Ejercicio4 cuenta corriente*** " << endl;
    cout << "5 ***Ejercicio5 cuenta corriente*** " << endl;

    cout << "Seleccione una opción:" << endl;
    cout << "1. Ingresar datos de la cuenta" << endl;
    cout << "2. Modificar datos de la cuenta" << endl;
    cout << "3. Realizar operaciones" << endl;
    cout << "0. Salir" << endl;
}

int main()
{
    char opcion;
    CuentaCorriente cuentaEE;
    cuentaEE.setNombre("");
    cuentaEE.setApellido("");
    cuentaEE.setDireccion("");
    cuentaEE.setTelefono("");

    cout << "El nombre del cliente es" << cuentaEE.getNombre()<<endl;

while (true) {
       menu();
       cout << "Ingrese su opción: ";
       cin >> opcion;

       if opcion==1{
           cout << "Seleccione una opción:" << endl;
           cout << "1. Ingresar datos de la cuenta" << endl;
           cout << "2. Modificar datos de la cuenta" << endl;
           cout << "3. Realizar operaciones" << endl;
           cout << "0. Salir" << endl;

            switch (opcion) {
                 case '1': {
                    string nombre, apellidos, direccion, telefono;
                    double saldo;

                    cout << "Ingrese su nombre: ";
                    cin.ignore();
                    getline(cin, nombre);
                    cout << "Ingrese sus apellidos: ";
                    getline(cin, apellidos);
                    cout << "Ingrese su dirección: ";
                    getline(cin, direccion);
                    cout << "Ingrese su número de teléfono: ";
                    getline(cin, telefono);
                    cout << "Ingrese su saldo inicial: ";
                    cin >> saldo;

                    cuenta.setNombre(nombre);
                    cuenta.setApellidos(apellidos);
                    cuenta.setDireccion(direccion);
                    cuenta.setTelefono(telefono);
                    cuenta.setSaldo(saldo);

                    cout << "Datos de la cuenta ingresados correctamente." << endl;
                    break;
                }

                case '2': {
                    string nombre, apellidos, direccion, telefono;

                    cout << "Ingrese su nuevo nombre: ";
                    cin.ignore();
                    getline(cin, nombre);
                    cout << "Ingrese sus nuevos apellidos: ";
                    getline(cin, apellidos);
                    cout << "Ingrese su nueva dirección: ";
                    getline(cin, direccion);
                    cout << "Ingrese su nuevo número de teléfono: ";
                    getline(cin, telefono);

                    cuenta.setNombre(nombre);
                    cuenta.setApellidos(apellidos);
                    cuenta.setDireccion(direccion);
                    cuenta.setTelefono(telefono);

                    cout << "Datos de la cuenta modificados correctamente." << endl;
                    break;
           }

                case '3': {
                    char opcion_operaciones;
                    double cantidad;

                    cout << "Seleccione una operación:" << endl;
                    cout << "1. Consultar datos de la cuenta" << endl;
                    cout << "2. Retirar dinero" << endl;
                    cout << "3. Ingresar dinero" << endl;
                    cout << "4. Consultar si el saldo es negativo" << endl;
                    cout << "0. Volver al menú principal" << endl;
                    cout << "Ingrese su opción: ";
                    cin >> opcion_operaciones;

                    switch (opcion_operaciones) {
                        case '1':
                            cuenta.consultarCuenta();
                            break;

                        case '2':
                            cout << "Ingrese la cantidad a retirar: ";
                            cin >> cantidad;
                            cuenta.retirarDinero(cantidad);
                            cout << "Dinero retirado correctamente." << endl;
                            break;

                        case '3':
                            cout << "Ingrese la cantidad a ingresar: ";
                            cin >> cantidad;
                            cuenta.ingresarDinero(cantidad);
                            cout << "Dinero ingresado correctamente." << endl;
                            break;

                        case '4':
                            if (cuenta.saldoNegativo())
                                cout << "La cuenta está en números rojos." << endl;
                            else
                                cout << "La cuenta no está en números rojos." << endl;
                            break;

                        case '0':
                            break;

                        default:
                            cout << "Opción no válida." << endl;
                            break;
                    }
                    break;
                }

                case '0':
                    cout << "Saliendo del programa..." << endl;
                    return 0;

                default:
                    cout << "Opción no válida." << endl;
                    break;
                }
            }
        }

      else if opcion==2{
       }



       else if opcion==3{
       }
       else if opcion==4{
       }
       else if opcion==5{
       }

   return 0;
}
