#include <iostream>
using namespace std;

/*
*
* Problema 72
*
* Demostrar que la suma de los cuadrados de cinco enteros consecutivos es siempre divisible entre 5
*
*/

//@Author   Ricardo Valadez Leal
//@Date     18/3/22

int main (){ 

    //Para determinar el cuadrado de cinco enteros
    double ent1,ent2,ent3,ent4,ent5,suma,divisible;
    
    cout<< "Dame el primer numero entero: ";
    cin >> ent1;

    cout<< "Dame el segundo numero entero: ";
    cin >> ent2;

    cout<< "Dame el tercer numero entero: ";
    cin >> ent3;

    cout<< "Dame el cuarto numero entero: ";
    cin >> ent4;

    cout<< "Dame el quinto numero entero: ";
    cin >> ent5;

    suma = (ent1*ent1)+(ent2*ent2)+(ent3*ent3)+(ent4*ent4)+(ent5*ent5);
    //Si el numero saldriera con decimal estuviera mal la operacion (Pero NO puede ocurrir eso)
    divisible=suma/5;

    cout <<"{" << divisible << "} No exiten cantidades decimales, por que siempre es divisible por 5"<<endl;

}
