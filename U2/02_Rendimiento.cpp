#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double punt,din;
    string nivel;
    cout<<"Ingresa tu puntuación";
    cin>>punt;
    if (punt==0||punt==0.4||punt>=0.6)
    {
       if(punt==0)
       {
        nivel="Inaceptable";
       }
       else if (punt==0.4)
       {
        nivel="Aceptable";
       }
       else if (punt>=0.6)  
       {
        nivel="Meritorio";
       }
       din=punt*2400;
       cout<<"tu nivel es: "<<nivel<<" recibirás: $"<<din;
    }
    else
    {
        cout<<"Puntuación inválida";
    }

    return 0;
}