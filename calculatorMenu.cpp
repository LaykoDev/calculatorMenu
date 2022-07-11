#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;


void ClearScreen()
{
    int n;
    for (n = 0; n < 10; n++)
        cout << "\n\n\n\n\n\n\n\n\n\n";
}

int main() {
    int suma, resta, multiplicacion, division;
     int opcion, opcion2;
    cout << "\nElige que expresion matematica quieres hacer: \n";
    cout << "1-. Sumar\n";
    cout << "2-. Restar\n";
    cout << "3-. Multiplicar\n";
    cout << "4-. Dividir\n ";
    cout << "\n ";
    cin >> opcion;

    switch(opcion){
        case 1:
            cout << "\nEscribe que numeros quieres sumar: \n \n";
            cin >> opcion >> opcion2;
            suma = opcion + opcion2;
            cout << "\nEl resultado de la operacion es " << suma << ".";
            break;
        case 2:
            cout << "\nEscribe que numeros quieres restar: \n \n";
            cin >> opcion >> opcion2;
            resta = opcion - opcion2;
            cout << "\nEl resultado de la operacion es " << resta << ".";
            break;
        case 3:
            cout << "\nEscribe que numeros quieres multiplicar: \n \n";
            cin >> opcion >> opcion2;
            multiplicacion = opcion * opcion2;
            cout << "\nEl resultado de la operacion es " << multiplicacion << ".";
            break;
        case 4:
            cout << "\nEscribe que numeros quieres dividir: \n \n";
            cin >> opcion >> opcion2;
            division = opcion / opcion2;
            cout << "\nEl resultado de la operacion es " << division << ".";
            break;
        default:
            cout << "\nDebes de elegir una opcion correcta.";
            break;
    }
    getch();
    return 0;
}
