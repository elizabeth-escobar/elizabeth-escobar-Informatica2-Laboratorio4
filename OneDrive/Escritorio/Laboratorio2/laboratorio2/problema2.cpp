#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unordered_map>

using namespace std;
/*Elabora un programa que genere un arreglo de 200 letras mayúsculas aleatorias,
imprime este arreglo y luego imprime cuantas veces se repita cada letra en el mismo.*/

int ejercicio2(){
    srand(time(NULL)); // Inicializar la semilla para generar números aleatorios

        // Generar arreglo de 200 letras mayúsculas aleatorias
        char arreglo[200];
        for (int i = 0; i < 200; ++i) {
            arreglo[i] = 'A' + rand() % 26; // Generar una letra mayúscula aleatoria
        }

        // Imprimir el arreglo generado
        cout << "Arreglo generado: " << endl;
        for (int i = 0; i < 200; ++i) {
            cout << arreglo[i];
        }
        cout << endl;

        // Contar la frecuencia de cada letra
        unordered_map<char, int> frecuencia_letras;
        for (int i = 0; i < 200; ++i) {
            frecuencia_letras[arreglo[i]]++;
        }

        // Imprimir la frecuencia de cada letra
        cout << "\nFrecuencia de cada letra: " << endl;
        for (auto& elem : frecuencia_letras) {
            cout << elem.first << ": " << elem.second << endl;
        }

        return 0;
}
