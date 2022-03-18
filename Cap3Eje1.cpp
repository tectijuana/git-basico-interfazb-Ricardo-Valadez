#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.1416
#endif
using namespace std;

/*
*
* 1. Dados los tres lados A,B,C, de un triangulo, encontrar los tres ángulos a, b y c. Suponer que todos los ángulos son agudos.
*
*/

//@Author   Ricardo Valadez Leal
//@Date     17/3/22

//Metodo para pasar de rad a grados
double transformacion(double rad)
{
    return rad * 180 / MPI;
}

int main()
{
    double A, B, C;
    double a, b, c;

    cout << "Ingrese los lados del triangulo agudo" << endl;
    
    cout << "Lado A = ";
    cin >> A;

    cout << "Lado B = ";
    cin >> B;

    cout << "Lado C = ";
    cin >> C;

    //Operacion para sacar el angulo de cada lado
    a = transformacion(1 / (cos((B*(B) + C*(C) - A*(A)) / (2 * B * C))));
    b = transformacion(1 / (cos((A*(A) + C*(C) - B*(B)) / (2 * A * C))));
    c = transformacion(1 / (cos((A*(A) + B*(B) - C*(C)) / (2 * A * C))));   

    cout << "Resultados \n" << "Angulo a = " << a << " - Angulo b = " << b << " - Angulo C = " << c << endl;

}