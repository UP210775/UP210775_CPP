// Tablas acendente, decendente y while, do whilwe//
#include <iostream>
using namespace std;

int main()
{

    int numero = 0, multiplicar = 0, contador = 1;

    cout << "introduce su numero a multiplicar:";
    cin >> numero;
    cout << endl
         << "Hasta que numero quieres multilicar:";
    cin >> multiplicar;

    for (int i = 1; i <= multiplicar; i++)
    {

        cout << endl
             << i << "." << numero << "*" << i << "=" << numero * i;
    }

    cout << endl;
    cout << "introduce su numero a multiplicar:";
    cin >> numero;
    cout << endl
         << "Hasta que numero quieres multiplicae:";
    cin >> multiplicar;

    for (multiplicar; multiplicar > 1; multiplicar--)
    {

        cout << endl
             << multiplicar << "." << numero << "*" << multiplicar << "=" << numero * multiplicar;
    }

    cout << endl;
    cout << "introduce su numero a multiplica:";
    cin >> numero;
    cout << endl
         << "Hasta que numero quieres multiplicar:";
    cin >> multiplicar;

    while (contador <= multiplicar)
    {
        cout << endl
             << contador << "." << numero << "*" << contador << "=" << numero * contador;
        contador++;
    }

    contador = 1;
    cout << endl
         << "Introduzca su número a multiplicar: ";
    cin >> numero;
    cout << endl
         << "Hasta que numero quiere multiplicar: ";
    cin >> multiplicar;

    cout << endl
         << "Tabla con do while";
    cout << endl;
    do
    {
        cout << endl
             << contador << ". " << numero << " * " << contador << " = " << numero * contador;
        contador++;
    } while (contador <= multiplicar);

    cout << endl;
    cout << endl
         << "Tablas del 1 al 10";
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {

        for (int j = 1; j <= 10; j++)
        {
            cout << endl
                 << j << " . " << i << " * " << j << " = " << i * j;
        }
        cout << endl;
    }

    getchar();
    return 0;
}
