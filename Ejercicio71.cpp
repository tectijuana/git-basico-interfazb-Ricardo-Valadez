#include <iostream>
using namespace std;

/*
*
* Problema 71
*
* Con los enteros de uno al nueve, tomando de tres a la vez ¿de cuantas formas puede obtener una suma de 15?
*
*/

//@Author   Ricardo-Valadez
//@Date     18/3/22

int main (){ 

    int suma,contador=0;
    
    //Loop para encontrar las posibles operaciones
    for (int i=1;i<=9;i++){
        for (int j=1;j<=9;j++){
            for (int h=1;h<=9;h++){
                suma=i+j+h;
                if (i+j+h==15){
                    cout <<i <<" + " <<j <<" + " <<h <<" = "<<suma <<endl;
                    contador++;
                }
            }    
        }        
    }

    cout <<"La cantidad de operaciones que se pudieron realizar son:  " << contador <<endl;

}
