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
