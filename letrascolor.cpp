#include <iostream>
using namespace std;

int main()
{
    char letra;

    cout << "Ingrese una letra de (R, Y, B, W, K, C, G): ";
    cin >> letra;
    // la funcion "toupper" sirve para que podamos poner una mayuscula y minuscula, asi si no nos da el probla de "letra incorrecta"
    // ya que si quitamos la funcion toupper si ingresamos una minuscula nos diria "letra incorrecta"
    // tambien tendriamos otra opcion para que no nos de ese error y sin utilizar el toupper que seria ocupar: case 'R': y case 'r'
    // por lo tanto asi se podria hacer de otra forma pero es mas largo y no tan util

    switch (toupper(letra))
    {
    case 'R':
        cout << "Rojo";
        break;
    case 'Y':
        cout << "Amarillo";
        break;
    case 'B':
        cout << "Azul";
        break;
    case 'W':
        cout << "Blanco";
        break;
    case 'K':
        cout << "Negro";
        break;
    case 'C':
        cout << "Cian";
        break;
    case 'G':
        cout << "Verde";
        break;
    default:
        cout << "Letra incorrecta";
        break;
    }

    return 0;
}