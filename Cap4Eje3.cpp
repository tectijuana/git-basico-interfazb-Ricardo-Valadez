#include <iostream>
#include <cmath>
using namespace std;

/*
*
* 3. Introducir la medida en radianes de un angulo y calcular la medida en grados
*
*/

//@Author   Ricardo Valadez Leal
//@Date     17/3/22


int main()
{
    float grados=0,rad=0,resultado;
    
    cout <<"Ingrese los radianes a transformar: ";
    cin>>rad;
    
    //Operacion para convertir de radianes a grados
    resultado= (rad*180)/M_PI;

    cout <<"El valor de " << rad << " , en grados son: " <<resultado <<endl;

}