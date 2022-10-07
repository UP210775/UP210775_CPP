#include <iostream>
using namespace std;

int main(){

    float entrada;

    cout<<"Introduzca su puntuacin: ";cin>>entrada;

    if(entrada == 0.0 || entrada == 0 || (entrada > 0.39 && entrada < 0.41) || entrada >= 0.6){
        cout<<endl<<"Puntuacion valida";
        cout<<endl<<"Usted obtiene = "<<2400*entrada<<" $";
        
    }else{
        cout<<endl<<"Puntuacion invalida";
    }

    
    
    
    

    getchar();
    return 0;
}