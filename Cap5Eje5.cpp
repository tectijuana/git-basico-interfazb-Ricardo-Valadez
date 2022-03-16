#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 5. Escribir un programa que simule arrojar un dado 60 veces. Contar e imprimir el número que sale cada lado.
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
    //Todos los contadores necesarios para el programa
    int n,numeroalt,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
    
    //Necesario para ser un numero verdaderamente aleatorio    
    srand(time(0));

    cout << "Presiona [1] para tirar un dado 60 veces  : ";
    cin >> n;
    
    //Loop para lanzar un dado 60 veces
    for(int i=1;i<=60;i++){
        
        //Se manda a llamar el metodo
        numeroalt=dado();
        
        //Un switch para indentificar el numero que aparece
        switch(numeroalt){

            case 1:
                cont1++;
            break;
            
            case 2:
                cont2++;
            break;            
           
            case 3:
                cont3++;
            break;
            
            case 4:
                cont4++;
            break;  
            
            case 5:
                cont5++;
            break;                      
            
            case 6:
                cont6++;
            break;
        }
    }

    cout << "Su resultado fue : " << endl;
    cout << "Lados: 1 [" << cont1 << "] Lados: 2 [" << cont2 << "] Lados: 3 [" << cont3 << "] Lados: 4 [" << cont4 << "] Lados: 5 [" << cont5 << "] Lados 6 [" << cont6 << "] " << endl;
}