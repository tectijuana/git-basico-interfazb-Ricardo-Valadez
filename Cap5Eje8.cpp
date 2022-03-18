#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 8. Escribir un programa para simular el tiro de dos dados 1,000 veces y sacar el número de sietes y el de onces
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
    int n,primerdado,segundodado,suma;
    int contador7,contador12;
    
    //Necesario para ser un numero verdaderamente aleatorio    
    srand(time(0));

    cout << "Presiona [1] para tirar un dado  : ";
    cin >> n;
    
    //Loop para tirar 2 sdados 1000 veces 
    for (int i=1;i<=1000;i++){

        primerdado=dado();
        segundodado=dado();

        //Realizar la suma 
        suma=primerdado+segundodado;

        //Identificar si la suma de los dos dados salio 7 o 12
        if (suma==7){
            contador7++;
        }
        if(suma == 12){
            contador12++;
        }
        
    }  

    cout << "Numero de veces que salio 7: [" << contador7 << "] Numero de veces que salio 12: [" << contador12 << "]"<<endl;

}
