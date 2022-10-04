#include <iostream>

using namespace std;

int main(){

    int numero = 0, multiplicar = 0;

    cout<<"introduce su numero a multiplicar";cin>>numero;
    cout<<end<<"Hasta que numero quieres multilicar";cin>>multiplicar;

    for(int i = 1; i <= multiplicar; i++){

        cout<<endl<<i<< "."<<numero<<"*"<<i<<"="<<numero*i;
    }
    getchar();
            return 0;
}
