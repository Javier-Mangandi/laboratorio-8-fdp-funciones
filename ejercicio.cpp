/*Pedir un numero al usuario por medio de una funcion determinar si es un numero perfecto
Los numeros perfectos son: La suma de sus divisores es igual al numero
Ejemplo: Seis es un numero perfecto porque "6 = 3+2+1"
*/

#include <iostream>
using namespace std;

bool esPerfecto(int N) // booleano para identificar si es falso o verdadero
{
    int suma = 0;

    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        { // Hacemos la sumatoria para saber si es perfecto o no
            suma += i;
        }
    }
    return suma == N;
}

int pedirNumber()
{
    int N; // Solicitamos un numero para operarlo y conocer si es perfecto o no
    cout << "Por favor ingresar un numero, para saber si es perfecto o no:" << endl;
    cin >> N;
    return N;
}
int main()
{

    int N = pedirNumber();

    cout << "===PERFECTO O NO???? ===" << endl; // Establecemos la condicional si es correcto o no
    if (esPerfecto(N))
    {
        cout << "Tu numero es Perfecto!!!" << endl;
    }
    else
    {
        cout << "Tu numero NO ES perfecto!!" << endl;
    }

    return 0; // Fin del programa
}
