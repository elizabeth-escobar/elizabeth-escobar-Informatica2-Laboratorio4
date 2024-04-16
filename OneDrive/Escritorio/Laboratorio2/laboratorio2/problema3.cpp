#include <iostream>
#include <cstring> // librería para funciones de cadenas de caracteres



using namespace std;

/*Haz una función que compare 2 cadenas de caracteres y retorne un valor lógico
verdadero si son iguales, y falso en caso contrario, no olvides también tener en cuenta
la longitud de las cadenas. Escribe un programa de prueba.*/



bool compararCadenas(const char* cadena1, const char* cadena2) {
    // Obtener la longitud de ambas cadenas
    int longitud1 = strlen(cadena1); // Obtener la longitud de cadena1
    int longitud2 = strlen(cadena2); // Obtener la longitud de cadena2

    // Si las longitudes son diferentes, las cadenas no pueden ser iguales
    if (longitud1 != longitud2) {
        return false; // Retorna falso si las longitudes son diferentes
    }

    // Comparar cada carácter de ambas cadenas
    for (int i = 0; i < longitud1; ++i) {
        if (cadena1[i] != cadena2[i]) {
            return false; // Si algún carácter es diferente, las cadenas son distintas
        }
    }

    // Si todas las comparaciones fueron iguales, las cadenas son idénticas
    return true; // Retorna verdadero si todas las comparaciones fueron iguales
}

int ejercicio3() {
    // Definir dos cadenas para probar la función
    const char* cadena1 = "Casa";
    const char* cadena2 = "Casa";
    const char* cadena3 = "Teclado";

    // Probar la función comparando las cadenas
    cout << "Comparando cadena1 y cadena2: ";
    if (compararCadenas(cadena1, cadena2)) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas son diferentes." << endl;
    }

    cout << "Comparando cadena1 y cadena3: ";
    if (compararCadenas(cadena1, cadena3)) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas son diferentes." << endl;
    }

    return 0;
}
