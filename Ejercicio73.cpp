#include <iostream>
using namespace std;

/*
*
* Problema 73
*
* Introducir un entero N y determinar si se trata de un cuadrado perfecto.
*
*/

//@Author   Ricardo-Valadez
//@Date     6/3/22

//Metodo para verificar si un numero es cuadrado perfecto
 bool EsCuadradoPerfecto(int x){
    bool resultado =false;
    int i;
    
        for(i=1;i<x;i++){
            if(i*i==x){
                resultado=true;
                break;
            }
        }
    return resultado;
}

int main (){ 
    int n,i;
    bool cuadrado=false;
    
    cout<< "Dame un numero positivo ";
    cin >> n;

    //Realizamos la pregunta y mandamos a llamar el metodo de cuadrado perfecto
    while (n>0){ 
        cuadrado=EsCuadradoPerfecto(n);
        
        //Dependiendo del resultado arrojamos la respuesta apropiada
        if(cuadrado){
            cout << n << " Es cuadrado perfecto\n";
        }
        else{
            cout << n << " No es un cuadrado perfecto\n";
        }
        cout<< "Dame un numero positivo para continuar\n" <<"O pon un 0 para terminar ejecucion :" ;
        cin >> n;
    }

}

