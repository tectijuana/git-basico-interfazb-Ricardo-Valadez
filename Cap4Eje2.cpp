#include <iostream>
#include <cmath>
using namespace std;

/*
*
* 2.Introducir la medida en grados de un angulo y calcular la medida en radianes
* 
*/

//@Author   Ricardo-Valadez
//@Date     16/3/22

int main()
{
    float grados=0,rad=0,resultado;
    
    cout <<"Ingrese los grados a transformar: ";
    cin >> grados;
    
    //Operacion para convertir de grados a radianes
    resultado= (grados*M_PI)/180;

    cout <<"El valor de " << grados << " , en radianes son: " <<resultado <<endl;
 }
