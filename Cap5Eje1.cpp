#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 1. Simular la caída de una moneda
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
    
    //Seguir preguntando para la operacion del programa mendiante un do-while
    do{
    numeroalt=moneda();
        if (numeroalt==1){
             resultado = "Sol";
        }
        else{
            resultado = "Aguila";
        } 

        cout << "Su resultado fue : " << resultado << endl;
        cout << "Quiere continuar? [1]SI o [2]NO : ";  
        cin >> n;  

    }while(n!=2);
 


}