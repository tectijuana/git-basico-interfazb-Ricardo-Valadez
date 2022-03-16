#include <iostream>
using namespace std;

/*
*
* Problema 74
*
* La suma de los cuadrados de los N primeros números está dada por la fórmula: N(N+1) (2N+1)/6. Con esta fórmula, 
* calcular la suma de los cuadrados de los primeros 150 enteros.
*
*/

//@Author   Ricardo Valadez Leal
//@Date     6/3/22

//Realizamos la operacion en el main para concoer la suma de sus cuadrados
int main(){

    int N;

    for (int i=1;i<=150;i++){

        N = (i*((i+1)*((2*i)+1)))/6;
        cout <<i<<" La suma de sus cuadrados son "<<N <<endl;
    }
}