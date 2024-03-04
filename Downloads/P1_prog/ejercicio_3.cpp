#include <iostream>
using namespace std;

bool esFechaValida(int mes, int dia) {
    if (mes < 1 || mes > 12) {
        return false;
    }

    if (mes == 2) {
        if (dia == 29) {
            return true;
        } else if (dia > 29) {
            return false;
        }
    }

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        return false;
    }

    if (dia < 1 || dia > 31) {
        return false;
    }

    return true;
}

void ejercicio3() {
    int mes, dia;
    cout << "Ingrese un mes en valor númerico (1-12): ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;
    if (!esFechaValida(mes, dia)) {
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
    } else if (mes == 2 && dia == 29) {
        cout << "29/2 es válida en bisiesto." << endl;
    } else {
        cout << dia << "/" << mes << " es una fecha valida." << endl;
    }
}
