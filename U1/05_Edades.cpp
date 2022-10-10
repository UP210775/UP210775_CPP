#include <iostream>
using namespace std;
int main()
{
    int E;
    cout << "introduce tu edad:" << endl;
    cin >> E;


    if (E >= 1 && E <= 150)
    {
        if (E >= 1 && E <= 30)
        {
            cout << "primera edad";
        }
        else 
        {
            if (E <= 60)
            {   
                cout << "segunda edad";
            }
            else
            {
                if (E <= 90)
                {
                    cout << "Tercera edad";
                }
                else
                {
                    cout << "Horas extras";
                }
            }
        }
    }
    else
    {
        cout<<"hijooole tas mal";
    }
    return 0;
}