#include <iostream>
#include <cmath>
using namespace std;

/*
*
* 1. Pasar grados a radianes utilizando multiplos de 10, desde 0 hasta 360 grados
* 
*/

//@Author   Ricardo Valadez Leal
//@Date     16/3/22

int main()
{
    int grados=0;
	
    //Loop de 0 a 360 grados
    for (grados; grados<=360; grados++){

        //Para ir en multiplos de 10
		if (grados % 10 == 0){
            
            //Formula pra convertir grados a decimales
			cout <<  "Grados: " << grados << " a decimales " << (grados*M_PI)/180 <<endl; 
        }
		
	}
}