#include <iostream>
using namespace std;

/*
*
* Problema 66
*
* Determinar todos los números menores que 100 que puedan escribiese como la suma de dos cuadrados.
*
*/

//@Author   Ricardo-Valadez
//@Date     18/3/22

int main (){ 

    int suma,contador=0;
    
    //Loop para encontrar todas las posibles respueastas
    for (int i=1;i<=100;i++){
        for (int j=1;j<=100;j++){
            for (int h=1;h<100;h++){
                suma=i+j+h;
                if ((j*j)+(h*h)==i){
                    cout <<j <<" + " <<h <<" = "<<i <<endl;
                    contador++;
                }
            }    
        }        
    }

    cout <<"La cantidad de operaciones que se pudieron realizar son:  " << contador <<endl;

}
