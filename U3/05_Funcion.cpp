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


