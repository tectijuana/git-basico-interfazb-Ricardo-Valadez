#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 2.  Escribir un programa para imprimir una secuencia característica de 100 tiros (es decir, sol, águila, sol, águila, etc.)
*
*
*/

//@Author   Ricardo Valadez Leal
//@Date     16/3/22

//Metodo para producir un numero al azar 
int moneda(void){
    
    int numeroalt;
    numeroalt= 1+rand()%2;
    
    return numeroalt;
}

int main()
{
    int n,numeroalt;
    string resultado;
    
    //Necesario para ser un numero verdaderamente aleatorio
    srand(time(0));

    cout << "Presiona [1] para tirar una moneda : ";
    cin >> n;
    
    //Loop para tirar la moneda 100 veces
    for (int i=1;i<=100;i++){

        numeroalt=moneda();
        if (numeroalt==1){
            resultado = "Sol";
        }
        else{
            resultado = "Aguila";
        }        

        cout <<"Tiro: ["<< i <<"] Su resultado fue " << resultado << endl;
    }  

}