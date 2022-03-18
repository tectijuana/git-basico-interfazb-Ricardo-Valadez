#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

/*
*
* 3. Hacer que la computadora simule los tiros de seis monedas 1,000 e imprimir la distribución que resulte
*
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
    int n,numeroalt,aguila=0,sol=0;
    
    //Necesario para ser un numero verdaderamente aleatorio    
    srand(time(0));

    cout << "Presiona [1] para tirar 6 monedas : ";
    cin >> n;
    
    //Loop para tirar 6 monedas 1000 veces
    for (int j=1;j<=1000;j++){

        for (int i=1;i<=6;i++){

            numeroalt=moneda();

            if (numeroalt==1){
                sol++;
            }
            else{
                aguila++;
            }        
        }  
    }  
    cout <<"Los resultados fueron: Sol [" << sol << "] Aguila [" << aguila <<"]" << endl;

}
