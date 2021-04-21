#include "iostream.h"
int main ()
{       
  float s=0,bandera=0, pro=0, cosecha[12],cosu=0,coin=0,mayor=0,aux=0; 
        cout<<"digite la cantidad de toneladas mensual " <<endl;
        for (int j=0; j<=11; j++)
        {cin>>cosecha[j];
        s=s+cosecha[j];
        pro=s/12;}
        cout<<"el promedio de toneladas es : "<<pro<<endl;     
        for ( int j=0; j<=11; j++) 
        if(cosecha[j]>pro)
        cosu=cosu+1;
        else 
        coin=coin+1;
        cout<<"la cantidad de meses que tuvieron una cosecha mayor al promedio es: "<<cosu<<endl;
        cout<<"la cantidad de meses con cosecha inferior al promedio es: "<<coin<<endl;
       
                
              system("pause");
}                  

