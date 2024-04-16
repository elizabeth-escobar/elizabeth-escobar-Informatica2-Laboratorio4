#include <iostream>
#include "problemas.h"


using namespace std;


/*Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.
Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200,$100 y $50.
Haz un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y
monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Usa arreglos y ciclos para realizar el programa.
*/


int ejercicio1(){
    int cantidad_deseada;

       // Pedir al usuario que ingrese la cantidad de dinero deseada
       cout << "Ingrese la cantidad de dinero deseada: ";
       cin >> cantidad_deseada;
       cout << "El numero escrito es: " << cantidad_deseada << endl;

       int billetes_monedas[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};// Vector de denominaciones de billetes y monedas
       int cantidades[10] = {0}; // Vector para almacenar la cantidad de cada billete o moneda necesaria, inicialmente en 0


       // Calcula la cantidad de billetes y monedas necesarios
       int size;
       size=10; //tamaño del vector de billetes y monedas
       for (int i = 0; i < size; i++) {
               if (cantidad_deseada >= billetes_monedas[i]) {  // Verifica si la cantidad es mayor o igual que la denominación actual
                    cantidades[i] = cantidad_deseada / billetes_monedas[i];// Calcula la cantidad de billetes o monedas necesarios y actualiza su valor
                    cantidad_deseada %= billetes_monedas[i];
           }
       }

       cout << "Billetes y monedas necesarios:\n";       // Muestra la cantidad de cada billete o moneda que se necesita
       for (int i = 0; i < 10; ++i) {
           cout << billetes_monedas[i] << ": " << cantidades[i] <<endl;
       }

       cout << "Faltante: " << cantidad_deseada << endl; // Muestra el faltante si no se puede alcanzar la cantidad deseada exactamente

       return 0;
   }

