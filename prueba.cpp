#include <stdio.h>
#include <stdlib.h>
#include <iostream>
 
using namespace std;

int main()
{
    float cambio; int cambioint, m10=0, m5=0, m2=0, m1=0, m50c=0, m10c=0;
    do
    {
    	cout<<"PROGRAMACION REALIZADA POR BLANCA GUADALUPE DELGADO VALENCIA Y CRISTINA CECILIA MENDOZA MERCADO"<<endl;
    	cout<<"porfavor ingresa el cambio que deseas:";
        cin >>cambio;
        cambioint = (int)cambio;
    }while((cambio - cambioint) != 0 && (cambio - cambioint) != 0.50);
    while(cambio != 0)
    
  
    {
        if(cambio>=10)
        {
            m10++;
            cambio-=10;
        }
        else if(cambio>=5)
        {
            m5++;
            cambio-=5;
        }
        else if(cambio>=2)
        {
            m2++;
            cambio-=2;
        }
        else if(cambio>=1)
        {
            m1++;
            cambio-=1;
        }
        else if(cambio>=0.5)
        {
            m50c++;
            cambio-=0.5;
        }
        else if(cambio>=0.1)
        {
            m10c++;
            cambio-=0.1;
        }
    }
    cout << "monedas de 10: " << m10 << "\n monedas de 5: " << m5 << "\n monedas de 2: " << m2 << "\n monedas de 1: " << m1 << "\n monedas de 50c: " << m50c << "\n monedas de 10c: " << m10c;
}

