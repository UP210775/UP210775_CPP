# Programmas Unidad 2

## Joshua Natanael Martinez Alonso / UP210775

## Rentas 

- - -
```
#include <iostream>
using namespace std;

int main(){
    
    double renta;

    cout<<"Ingrese su renta anual: ";cin>>renta;

    if(renta < 10000){
        cout<<"Su impuesto es del: 5%";
    }
    else if(renta <20000){
        cout<<"Su impuesto es del: 15%";
    }
    else if(renta <35000){
        cout<<"Su impuesto es del: 20%";
    }
    else if(renta <=60000){
        cout<<"Su impuesto es del: 30%";
    }
    else if(renta >60000){
        cout<<"Su impuesto es del: 45%";
    }


    return 0;
    getchar();
}
```
- - - 

## Rendimiento 

- - -
```
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
```
- - - 

## Sala de juegos 

- - -
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int edad;
    cout<<"Ingresa tu edad";
    cin>>edad;
    if(edad<4)
    {
        cout<<"Entras gratis";
    }
    else if(edad>=4 && edad<=18)
    {
        cout<<"pagas $5";
    }
    else
    {
        cout<<"Pagas $10";
    }
    return 0;
}
```
- - - 

## Pizzeria 

- - -
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int edad;
    cout<<"Ingresa tu edad";
    cin>>edad;
    if(edad<4)
    {
        cout<<"Entras gratis";
    }
    else if(edad>=4 && edad<=18)
    {
        cout<<"pagas $5";
    }
    else
    {
        cout<<"Pagas $10";
    }
    return 0;
}

```
- - - 

## Temperaturas 

- - -
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double temp, may=0, men=100000, prom=0;
    for(int i=1;i<=6;i++)
    {
        cout<<"ingresa tu temperatura";
        cin>>temp;
        if(temp>may)
        {
            may=temp;
        }
        
        else if(temp<men)
        {
            men=temp;
        }
        prom=prom+temp;

    }
    prom=prom/6;
    cout<< "El promedio de las temperaturas es: "<<prom<<"\n La temperatura mas alta fue: "<<may<<"\n La temperatura más baja fue: "<<men;
    return 0;
}
```
- - - 
## Compras 

- - -
```
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double compras=1,total=0, cant, subtotal;
    while (compras!=0)
    {
        cout<<"Ingrese el precio de su articulo";
        cin>>compras;
        if(compras!=0)
        {
          cout<<"Cuantos articulos de estos lleva?";
        cin>>cant;  
        }
        subtotal=compras*cant;
        total=subtotal+total;
    }
    cout<<"su total es de: $"<<total;
    return 0;
}
```
- - - 
## Binario Decimal

- - -
```
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
```
- - - 