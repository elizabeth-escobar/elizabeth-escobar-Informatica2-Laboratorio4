#include <iostream>
using namespace std;

int ejercicio2(){

    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50}; // se establecen los valores de los billetes y monedas que se combinan
    int cantidad_billetes_monedas[sizeof(denominaciones) / sizeof(denominaciones[0])] = {0};

    int cantidad_dinero;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad_dinero;

    int faltante = cantidad_dinero;
    for (int i = 0; i < (int)(sizeof(denominaciones) / sizeof(denominaciones[0])); ++i) { // se realiza el calculo de la cantidad de billetas y monedas que se requieren
         cantidad_billetes_monedas[i] = faltante / denominaciones[i];
         faltante %= denominaciones[i];
        }

    for (int i = 0; i < (int)(sizeof(denominaciones) / sizeof(denominaciones[0])); ++i) { //muestra la cantidad de billetes y monedas que requiere
         cout << denominaciones[i] << " : " << cantidad_billetes_monedas[i] << endl;
        }


    if (faltante > 0) {
         cout << "Faltante: " << faltante << endl; //muestra el valor faltante
        }

        return 0;

}
