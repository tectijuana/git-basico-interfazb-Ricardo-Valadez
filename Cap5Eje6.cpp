#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 6. Simular 1,000 tiradas de un dado, no imprimir el resultado de cada tirada. 
* Al final de la simulación, imprimir la cantidad de cuatros que salieron.
*
*/

//@Author   Ricardo Valadez Leal
//@Date     16/3/22

//Metodo para producir un numero al azar 
int dado(void){
    
    int numeroalt;
    numeroalt= 1+rand()%6;
    
    return numeroalt;
}

int main()
{
    int n,numeroalt,cuatro=0;
    
    //Necesario para ser un numero verdaderamente aleatorio    
    srand(time(0));

    cout << "Presiona [1] para tirar un dado  : ";
    cin >> n;
    
    //Loop para tirar un dado 1000 veces
    for (int i=1;i<=1000;i++){

        numeroalt=dado();

        if (numeroalt==4){
            cuatro++;
        }
  
    }  
  
    cout <<"Salieron ["<< cuatro <<"] cuatros durante la ejecucion" << endl;

}