#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, char const *argv[])
{
    string bin;
    int tam, sum=0;
    cout<<"Ingrese el número binario a convertir"<<endl;
    cin>>bin;
    tam=bin.size();
    for (int i = (tam-1); i >=0; i--)
    {
        if (bin[i]=='1')
        {
            sum=sum + pow(2,((tam-1)-i));
        }
    }
    cout<<"El numero "<<bin<<" en decimal es: "<<sum<<endl;

    return 0;
}