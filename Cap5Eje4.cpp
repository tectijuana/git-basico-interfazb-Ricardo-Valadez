#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 4. Simular que se arroja una moneda cinco veces sucesivamente. 
* Repetir la secuencia de 5 tiros 100 veces, contando el número de águilas 
* que aparecen en cada secuencia de diez tiros. Cuando se termine, 
* sacar el número de veces que no aparecieron águilas; cuando apareció una, dos, tres, cuatro, cinco
*
*/

//@Author   Ricardo-Valadez
//@Date     16/3/22

//Metodo para producir un numero al azar 
int moneda(void){
    
    int numeroalt;
    numeroalt= 1+rand()%2;
    
    return numeroalt;
}

int main()
{
    int n,numeroalt,aguila=2,sol=0;
    int arreglo[4],contador=0,repeticion=0;
    
    //Necesario para ser un numero verdaderamente aleatorio        
    srand(time(0));

    cout << "Presiona [1] para tirar cinco moneda : ";
    cin >> n;
    
    //Loop para tirar 5 monedas 100 veces
    for (int j=1;j<=100;j++){

        for (int i=1;i<=5;i++){
            numeroalt=moneda();
            arreglo[i]=numeroalt;   
        }  

        contador++;

        //Cuando llegue a los primero 10 lanzamientos imprimir el resultado y sucesivamente
        if (contador==10){
            for (int x=0;x<5;x++){
                if(aguila==arreglo[x]){
                    repeticion++;
                }
            }
            cout << j <<": El lanzamiento quedo con: " << repeticion << " Aguilas" << endl;

            //Los contadores hacen reset para continuar
            repeticion=0;
            contador=0;
        }        
    }  

}
