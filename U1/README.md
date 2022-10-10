# Programmas Unidad 1

## Hola mundo

- - -
```
int main(){


    cout<<"\nHola mundos"<<endl;

    getchar();
    return 0;
}
```
- - - 

## Par o Impar

- - -
```

int main(){


    cout<<"\n Par o Impar"<<endl;

    getchar();
    return 0;
}
```
- - - 

## Tipos de datos

- - -
```
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int entero = 256415642;
    float flotante = 3.589;
    double grande = 2.45489656465;
    char caracter = '@';

    cout <<"Este programa muestra los tipos de datos. \n";
    cout <<"Este es un dato de tipo entero:" <<entero<<endl;
    cout <<"Este es un dato de tipo flotante:" <<flotante<<endl;
    cout <<"Este es un dato de tipo grande:" <<grande<<endl;
    cout <<"Este es un dato de tipo caracter:" <<caracter<<endl;


    getchar();
    return 0;

}
```
- - - 

## Ciclos

- - -
```
#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int suma = 0;
    int pa = 0, im = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {

       pa= pa+i;
        }
        else{
            im=im+i;
        }
    
    }
    suma= pa+im;
   printf("\n\nLa suma de los Numeros impares es %d ", im);
     printf("\n\nLa suma de los Numeros pares es %d ", pa);
       printf("\n\nLa suma de los Numeros impares y Pares %d ", suma); 
    return 0;
}


```
- - - 

## Edad

- - -
```
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
```
- - - 