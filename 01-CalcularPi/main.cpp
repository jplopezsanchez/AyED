#include <iostream>
double CPi(int x); 
using namespace std;
 
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
  int x {0};
  
    PI = CPi (x);
  
  while (PI != 3.141592) // correccion del tp anterior ahora la pausa se hace mediante un while
    {
      x ++;
    }
    
    cout.precision (7); //para que esten los primeros seis decimales 
    cout << "El valor del numero PI es: " << PI << endl;
 

 
    return 0;
}
