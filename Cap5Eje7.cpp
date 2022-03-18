#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 7. Tirar un dado 1,000 veces. Contar las veces que sale 3.
* 
*/

//@Author   Ricardo-Valadez
//@Date     16/3/22

//Metodo para producir un numero al azar 
int dado(void){
    
    int numeroalt;
    numeroalt= 1+rand()%6;
    
    return numeroalt;
}

int main()
{
    int n,numeroalt,tres=0;
    
    //Necesario para ser un numero verdaderamente aleatorio    
    srand(time(0));

    cout << "Presiona [1] para tirar un dado  : ";
    cin >> n;
    
    //Loop´para tirar un dado 1000 veces
    for (int i=1;i<=1000;i++){

        numeroalt=dado();
        
        //Contamos las veces que salen 3 
        if (numeroalt==3){
            tres++;
        }
  
    }  
  
    cout <<"Salieron ["<< tres <<"] tres, durante la ejecucion" << endl;

}
