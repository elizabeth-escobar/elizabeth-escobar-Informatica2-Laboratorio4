#include <iostream>
#include "cuentacorriente.h"
#include "leerarchivotxt.h"
#include "busquedacaracter.h"
#include "codificacionmensaje.h"
#include "informacionpelicula.h"
using namespace std;

void menu() {
    cout << ":::::::Menu Principal:::::::" << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Ingresar datos de la cuenta" << endl;
    cout << "2. Modificar datos de la cuenta" << endl;
    cout << "3. Realizar operaciones" << endl;
    cout << "0. Salir" << endl;
}

/*int main() {
    char opcion;
    CuentaCorriente cuentaEE; // Utiliza el constructor por defecto

    while (true) {
        menu();
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case '1': {
                string nombre, apellido, direccion, telefono;
                double saldo;

                cout << "Ingrese su nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese sus apellidos: ";
                getline(cin, apellido);
                cout << "Ingrese su direccion: ";
                getline(cin, direccion);
                cout << "Ingrese su numero de telefono: ";
                getline(cin, telefono);
                cout << "Ingrese su saldo inicial: ";
                cin >> saldo;

                cuentaEE.setNombre(nombre);
                cuentaEE.setApellido(apellido);
                cuentaEE.setDireccion(direccion);
                cuentaEE.setTelefono(telefono);
                cuentaEE.setSaldo(saldo);

                cout << "Datos de la cuenta ingresados correctamente.\n" << endl;
                break;
            }

            case '2': {
                string nombre, apellido, direccion, telefono;

                cout << "Ingrese su nuevo nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese sus nuevos apellidos: ";
                getline(cin, apellido);
                cout << "Ingrese su nueva direccion: ";
                getline(cin, direccion);
                cout << "Ingrese su nuevo numero de telefono: ";
                getline(cin, telefono);

                cuentaEE.setNombre(nombre);
                cuentaEE.setApellido(apellido);
                cuentaEE.setDireccion(direccion);
                cuentaEE.setTelefono(telefono);

                cout << "Datos de la cuenta modificados correctamente.\n" << endl;
                break;
            }

            case '3': {
                char opcion_operaciones;
                double cantidad;

                cout << "Seleccione una operacion:" << endl;
                cout << "1. Consultar datos de la cuenta" << endl;
                cout << "2. Retirar dinero" << endl;
                cout << "3. Ingresar dinero" << endl;
                cout << "4. Consultar si el saldo es negativo" << endl;
                cout << "5. Consultar saldo Actual" << endl;
                cout << "0. Volver al menu principal" << endl;
                cout << "Ingrese su opcion: ";
                cin >> opcion_operaciones;

                switch (opcion_operaciones) {
                    case '1':
                        cuentaEE.getConsultarCuenta();
                        break;

                    case '2':
                        cout << "Ingrese la cantidad a retirar: ";
                        cin >> cantidad;
                        cuentaEE.setRetirarDinero(cantidad);
                        cout << "Dinero retirado correctamente." << endl;
                        break;

                    case '3':
                        cout << "Ingrese la cantidad a ingresar: ";
                        cin >> cantidad;
                        cuentaEE.setIngresarDinero(cantidad);
                        cout << "Dinero ingresado correctamente." << endl;
                        break;

                    case '4':
                        if (cuentaEE.getSaldoNegativo())
                            cout << "La cuenta esta en numeros rojos." << endl;
                        else
                            cout << "La cuenta no esta en numeros rojos." << endl;
                        break;
                    case '5':
                            cout << "El saldo actual es: " << cuentaEE.getSaldo() << endl;
                        break;

                    case '0':
                        break;

                    default:
                        cout << "Opcion no valida." << endl;
                        break;
                }
                break; // Finaliza el switch
            }

            case '0':
                cout << "Saliendo del programa..." << endl;
                return 0;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }
    }

    return 0;
}
*/

void menuEjercicios() {
    cout << ":::::::Menu Principal:::::::" << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Gestion cuenta corriente" << endl;
    cout << "2. Leer archivo txt" << endl;
    cout << "3. Busqueda caracteres o secuencias" << endl;
    cout << "4. Codificacion mensaje" << endl;
    cout << "5. Información de una pelicula" << endl;
    cout << "0. Salir" << endl;
}
int main() {

    char opcion;
    CuentaCorriente cuentaEE; // Utiliza el constructor por defecto

    while(true){
        menuEjercicios();
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
        case '1':{
            menu();
            cout << "Ingrese su opcion: ";
            cin >> opcion;

            switch (opcion) {
                case '1': {
                    string nombre, apellido, direccion, telefono;
                    double saldo;

                    cout << "Ingrese su nombre: ";
                    cin.ignore();
                    getline(cin, nombre);
                    cout << "Ingrese sus apellidos: ";
                    getline(cin, apellido);
                    cout << "Ingrese su direccion: ";
                    getline(cin, direccion);
                    cout << "Ingrese su numero de telefono: ";
                    getline(cin, telefono);
                    cout << "Ingrese su saldo inicial: ";
                    cin >> saldo;

                    cuentaEE.setNombre(nombre);
                    cuentaEE.setApellido(apellido);
                    cuentaEE.setDireccion(direccion);
                    cuentaEE.setTelefono(telefono);
                    cuentaEE.setSaldo(saldo);

                    cout << "Datos de la cuenta ingresados correctamente.\n" << endl;
                    break;
                }

                case '2': {
                    string nombre, apellido, direccion, telefono;

                    cout << "Ingrese su nuevo nombre: ";
                    cin.ignore();
                    getline(cin, nombre);
                    cout << "Ingrese sus nuevos apellidos: ";
                    getline(cin, apellido);
                    cout << "Ingrese su nueva direccion: ";
                    getline(cin, direccion);
                    cout << "Ingrese su nuevo numero de telefono: ";
                    getline(cin, telefono);

                    cuentaEE.setNombre(nombre);
                    cuentaEE.setApellido(apellido);
                    cuentaEE.setDireccion(direccion);
                    cuentaEE.setTelefono(telefono);

                    cout << "Datos de la cuenta modificados correctamente.\n" << endl;
                    break;
                }

                case '3': {
                    char opcion_operaciones;
                    double cantidad;

                    cout << "Seleccione una operacion:" << endl;
                    cout << "1. Consultar datos de la cuenta" << endl;
                    cout << "2. Retirar dinero" << endl;
                    cout << "3. Ingresar dinero" << endl;
                    cout << "4. Consultar si el saldo es negativo" << endl;
                    cout << "5. Consultar saldo Actual" << endl;
                    cout << "0. Volver al menu principal" << endl;
                    cout << "Ingrese su opcion: ";
                    cin >> opcion_operaciones;

                    switch (opcion_operaciones) {
                        case '1':
                            cuentaEE.getConsultarCuenta();
                            break;

                        case '2':
                            cout << "Ingrese la cantidad a retirar: ";
                            cin >> cantidad;
                            cuentaEE.setRetirarDinero(cantidad);
                            cout << "Dinero retirado correctamente." << endl;
                            break;

                        case '3':
                            cout << "Ingrese la cantidad a ingresar: ";
                            cin >> cantidad;
                            cuentaEE.setIngresarDinero(cantidad);
                            cout << "Dinero ingresado correctamente." << endl;
                            break;

                        case '4':
                            if (cuentaEE.getSaldoNegativo())
                                cout << "La cuenta esta en numeros rojos." << endl;
                            else
                                cout << "La cuenta no esta en numeros rojos." << endl;
                            break;
                        case '5':
                                cout << "El saldo actual es: " << cuentaEE.getSaldo() << endl;
                            break;

                        case '0':
                            break;

                        default:
                            cout << "Opcion no valida." << endl;
                            break;
                    }
                    break; // Finaliza el switch
                }

                case '0':
                    cout << "Saliendo del programa..." << endl;
                    return 0;

                default:
                    cout << "Opcion no valida." << endl;
                    break;
            }
        }

        case '2':{
            leerArchivo archivo;
                char opcion;

                cout << "Seleccione una opcion:" << endl;
                cout << "1. Escribir en un archivo" << endl;
                cout << "2. Leer un archivo" << endl;
                cout << "Ingrese su opcion: ";
                cin >> opcion;

                switch (opcion) {
                    case '1':
                        archivo.escribirArchivo();
                        break;
                    case '2':
                        archivo.lecturaArchivo();
                        break;
                    default:
                        cout << "Opción no valida." << endl;
                        break;
                }

        }
        case '3':{

        }
        case '4':{

        }

        case '5':{

        }

        case '0':{

            cout << "Saliendo del programa..." << endl;
            return 0;

        default:
            cout << "Opcion no valida." << endl;
            break;

        }





        }

        return 0;

    }
    return 0;

        }






