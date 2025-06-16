#include <iostream>
using namespace std;
// Se puede poner dentro del parentesis
float suma(float n1, float n2);
float resta(float n1,float n2);
float multy(float n1, float n2);
float div(float n1, float n2);

void mostrarOpciones()
{
    cout << "Calculadora" << endl;
    cout << "1.suma, 2.Resta 3. Multiplicacion  4. Division 5. Salir" << endl;
}
// El tipo Void no retorna nada, solo sirve para mostrar mensajes y no sobrecargar main
//
int main(void)
{

    int op;
    float num1, num2;
    do
    {
        mostrarOpciones();
        cin >> op;

        

        switch (op)
        {
        case 1:
            
            cout << "Ingrese los numeros a operar" << endl;
            cin >> num1 >> num2;
            cout << "El resultado de la suma es:" << suma(num1, num2)<<endl; 
            break;

        case 2:
            
            cout << "Ingrese los numeros a operar" << endl;
            cin >> num1 >> num2;
            cout << "El resultado de la resta es:" << resta(num1, num2)<<endl;
             break;

        case 3:
            
            cout << "Ingrese los numeros a operar" << endl;
            cin >> num1 >> num2;
            cout << "El resultado de la  multiplicacion es:" << multy(num1, num2)<<endl;
             break;

        case 4:
            
            cout << "Ingrese los numeros a operar" << endl;
            cin >> num1 >> num2;
            cout << "El resultado de la division es:" << div(num1, num2)<<endl;
             break;

        case 5:
            cout << "Saliendo..."<<endl;
             break;

        default:
            cout<<"Por favor ingrese digitos validos"<<endl;
            break;
        }
    } while (op != 5);

    return 0;
}
float suma(float n1, float n2)
{
    return n1 + n2;
}
float resta(float n1, float n2)
{
    return n1 - n2;
}
float multy(float n1, float n2)
{
    return n1 * n2;
}
float div(float n1, float n2)
{
    return n1 / n2;
}
