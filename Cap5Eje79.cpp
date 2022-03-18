#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

/*
*
* 79. Encontrar el promedio de 1,000 números tomados al azar
*
*/

//@Author   Ricardo-Valadez
//@Date     17/3/22


//Metodo para generar numeros al azar
int azar(void){
    
    int numeroalt;
    numeroalt= 1+rand();
    
    return numeroalt;
}

int main()
{
    int suma,numazar,promedio;

    //Necesario para ir sumando los numeros
    for (int i=1;i<=1000;i++){

        numazar=azar();

        suma=suma+numazar;
    } 
    //Operacion para sacar el promedio
    promedio= suma /1000;

    cout <<"Suma total: "<< suma << " Promedio final : " << promedio <<endl;
}
