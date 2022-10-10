/* Unidad 1. Tipos de datos 
   Autor: Joshua Natanael Martinez ALonso 
   Fecha: 15/09/2022
   Descripccion: Musestra los diferentes tipos de datos en c++
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int entero = 256415642;
    float flotante = 3.589;
    double grande = 2.45489656465;
    char caracter = '@';

    cout <<"Este programa muestra los tipos de datos. \n";
    cout <<"Este es un dato de tipo entero:" <<entero<<endl;
    cout <<"Este es un dato de tipo flotante:" <<flotante<<endl;
    cout <<"Este es un dato de tipo grande:" <<grande<<endl;
    cout <<"Este es un dato de tipo caracter:" <<caracter<<endl;


    getchar();
    return 0;

}