#include <iostream>
#include <iomanip>
using namespace std;

/*
*
* 80. La clase de ecología tiene cinco estudiantes que obtuvieron las siguientes notas en el examen: 
* 75, 93, 41, 98 y 71. El profesor desea calculare el promedio de las notas. Escribir un programa para realizar el cálculo.
*/

//@Author   Ricardo-Valadez
//@Date     17/3/22

int main()
{
    double promedio,suma;

    //Suma de los numero para sacar el promedio
    suma= 75+93+41+98+71;
    promedio= suma / 5;

    cout << "Calificaciones de un examen de cinco alumnos {75, 93, 41, 98, 71}" <<endl;
    cout <<"Promedio final : " << promedio <<endl;
}
