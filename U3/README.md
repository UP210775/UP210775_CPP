# Programas Unidad 3

## Joshua Natanael Martinez Alonso / UP210775

## Biseccion

- - -
```
#include <iostream>
#include <cmath>
using namespace std;

double fnecu1(double x)
{ 

    return (pow(x, 2) - 8 * x + 15);
}
int main()
{
    double x1 = -10;
    double x2 = 4.5;
    double xnueva, r;

    double es = .0001;         
    double er = abs(x2 - x1); 

    int i = 1;

    while (er > es)
    {

        xnueva = (x1 + x2) / 2;

        if (fnecu1(x1) * fnecu1(xnueva) < 0)
        {

            x2 = xnueva;
        }
        else
        {
            x1 = xnueva;
        }

        er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i= " << i << "  raiz=  " << xnueva << endl;
    return 0;
}

```
- - - 

## Desglose 

- - -
```
#include <iostream>
#include <conio.h>
using namespace std;

void desgloce(int dinero);

int main(){
	
	int dinero;
	
	cout<<"Ingresa tu dinero: ";cin>>dinero;
	
	desgloce(dinero);
	
	getch();
	return 0;
}


void desgloce(int dinero){
	int  mil = 0, quinientos = 0, doscientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0,dos = 0, uno = 0;	
	mil = dinero /1000;
	dinero %= 1000; 
	quinientos = dinero /500;
	dinero %= 500; 
	doscientos = dinero /200;
	dinero %= 200; 
	cien = dinero/100;
	dinero %= 100;
	cincuenta = dinero/50;
	dinero %= 50;
	veinte = dinero/20;
	dinero %= 20;
	diez = dinero/10;
	dinero %= 10;
	cinco = dinero/5;
	dinero %= 5;
	dos = dinero/2;
	dinero %= 2;
	uno = dinero/1;
	
	
	cout<<endl;
	cout<<"Mil: "<<mil<<endl;
	cout<<"quinientos: "<<quinientos<<endl;
	cout<<"Doscientos: "<<doscientos<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Dos: "<<dos<<endl;
	cout<<"Uno: "<<uno<<endl;
}
```
- - - 

## Desviacion  

- - -
```
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;


void desv(float );

int main(){
	float n;
	cout<<"Ingrese su numero de datos: ";cin>>n;
	
	desv(n);
	
	getch();
	return 0;
}

void desv(float n){
	
	float va = 0, prom = 0, suma = 0, s = 0, dv = 0;
	
	
	float datos[100];
	
	for(int i = 0; i < n; i++){
		
		cout<<"Ingrese sus datos: ";cin>>datos[i];
        cout<<endl;
	}


	for (int i = 0; i < n; i++)
	{
		s = s + datos[i];
	}
	
	prom = s/n;
	for (int i = 0; i < n; i++)
	{
		 suma = suma + (pow((datos[i] - prom),2));
		 
	}
	
	
	va = suma/(n-1);
	dv = sqrt(va);
	
	
	cout<<"\nDesviación estándar muestra: "<<dv;
	va = suma/(n);
	dv = sqrt(va);
	cout<<"\nDesviación estándar poblacional: "<<dv;
}
```
- - - 

## Año bisiesto 

- - -
```
#include <iostream>
#include <conio.h>
using namespace std;

int esbisiesto(int);
int main(){

	int year;
	
	cout<<"Ingrese un año: ";
	cin>>year;

	cout<<esbisiesto(year);
	
	getch();
	return 0;
}


int esbisiesto(int year){
	
	int bisiesto = 0;
	if(year%400==0 || (year%4==0 && year%100!=0)){
		bisiesto = 1;
	}
	return bisiesto;
}
```
- - - 

## Funcion 

- - -
```
#include <iostream>
#include <cmath>
using namespace std;

int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}

int sumatoria(int n)
{
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        r = r + 1;
    }
    return r;
}
double ecu(int x)
{
    double r;
    r = pow(x, 2) - 8 * x + 15;
    return r;
}
int main()
{
    int n = 10;
    double x = double(5);
   
    for (int i = 0; i <= 10; i++){
        x = ecu(i);
        cout << "x = " << i << " R ecuacion " << x << endl;
    }
    return 0;
}



```
- - - 
## Ordenar Vector 

- - -
```
#include<conio.h>
#include<iostream>
using namespace std;



int main(){
	
	int numeros[] = {4,1,2,3,5};
	int i,j, aux;
	
	for(i= 0; i <5; i++){
		for(j= 0; j <5; j++){
			if(numeros[j] > numeros[j + 1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}
	
	cout<<"Orden ascendente: "<<endl;
		
		for(i = 0; i <5; i++){
			cout<<numeros[i]<<" ";
		}
		
	
	getch();
	return 0;
}

```
- - - 
## Recursividad 

- - -
```
#include <iostream>
#include <conio.h>
using namespace std;


int factorial(int n);


int main(){
	
	cout<<factorial(5);
	
	
	
	getch();
	return 0;
}

int factorial(int n){
	
	if(n == 0){
		n = 1;
	}else{
		
		n = n * factorial(n-1);
	}
	
	return n;
}
```
- - - 

## RFC 

- - -
```
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void RFC(char nombre[], char apellido_paterno[], char apellido_materno[],char fecha[], int);

int main(){
	const int TAM = 30;
	char nombre[TAM], apellido_paterno[TAM], apellido_materno[TAM], fecha[TAM];
	
	
	
	cout<<"Ingrese un nombre: ";
	cin.getline(nombre,TAM,'\n');
	cout<<"Ingrese su apellido paterno: ";
	cin.getline(apellido_paterno,TAM,'\n');
	cout<<"Ingrese su apellido materno: ";
	cin.getline(apellido_materno,TAM,'\n');
	cout<<"Ingrese su fecha de nacimiento aaaa/mm/dd: ";
	cin.getline(fecha,TAM,'\n');
	
	RFC(nombre,apellido_paterno,apellido_materno,fecha,TAM);
	
	
	getch();
	return 0;
}

void RFC(char nombre[], char apellido_paterno[], char apellido_materno[],char fecha[],int TAM){
	
	char RFC[20];
	
	bool vocal = false;
	int tam, tamy, c = 0;
	strupr(nombre);
	strupr(apellido_paterno);
	strupr(apellido_materno);
	tam = strlen(nombre);
	RFC[0] = apellido_paterno[0];
		for(int i = 1; i <= tam; i++){
		
		if(vocal == false){
		switch(apellido_paterno[i]){
			case 'A' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'E' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'I' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'O' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'U' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
		}
		}
	}
	
	RFC[2] = apellido_materno[0];
	RFC[3] = nombre[0];
	
	tamy = strlen(fecha);

	for(int i=0;i<10;i++){
		if(fecha[i] != '/'){
			RFC[4+c] = fecha[i];
			c++;
		}
	}

	cout<<endl<<RFC;
	
}
```
- - - 
## Romano 

- - -
```
#include <iostream>
#include <conio.h>
using namespace std;

void num_romano(int &);

int main(){
	
	int n;
	
	cout<<"Digite un numero : ";cin>>n; 
	
	num_romano(n);
	
	getch();
	return 0;
}

void num_romano(int &n){
	
	int u, d, c, m;
	
	u = n%10; n /= 10;
	d = n%10; n /= 10; 
	c = n%10; n /= 10; 
	m = n%10; n /= 10; 
	
	switch(m){
		case 1: cout<<"M";break;
		case 2: cout<<"MM";break;
		case 3: cout<<"MMM";break;
	}
	
	switch(c){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
	
	switch(d){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
	}
	switch(u){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}
}
```
- - - 