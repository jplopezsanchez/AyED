#include <iostream>
using namespace std;
double CPi(int x); // x es el numero de iteraciones

 
//Función CPi (cuenta de pi): calcula el número PI a partir de una sucesión de términos 

double CPi (int x)
{
    double sum;
    int i;  // i representa a n en la serie de leibniz, 
    sum = 0.0;
 
    for ( i == 0; i <= x; i++)
    {
        if ( (i == 2 ) || ( (i % 2 ) == 0))
        {
           sum = sum + ((double) 1 / (2*i + 1)); 
        }
          else
          sum = sum - ((double) 1 / ( 2*i+ 1));
        }
 
return 4 * sum;
}
 
 
int main(void)
 
{
    double PI; // valor de pi
  
    PI = CPi (100000000);
    cout.precision (8); //para que esten los primeros seis decimales bien tuve que agrgar uno mas porque si no el programa lo redondea
    cout << "El valor del numero PI es: " << PI << endl;
 

 
    return 0;
}