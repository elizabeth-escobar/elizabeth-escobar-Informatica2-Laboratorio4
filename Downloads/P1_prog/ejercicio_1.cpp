#include <iostream>
using namespace std;

int ejercicio1(){
    char caracter;
    cout <<"Por favor ingrese un caracter: "<<endl;
    cin >>caracter;

    if (!isalpha(caracter)) { //determina si el caracter ingresado es una letra
        cout << "No es una letra." << endl;
            return 0;
        }

    caracter = tolower(caracter); //permite convertir el caracter a minúscula para hacer más fácil la comparación

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            cout << caracter << " es una vocal." << endl;
        }
    else {
            cout << caracter << " es una consonante." << endl;
        }

        return 0;

}
