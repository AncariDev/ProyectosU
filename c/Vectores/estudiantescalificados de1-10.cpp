#include "iostream.h"
int main ()
{       
  float s=0, pro=0, nota[20],i,ap=0,r=0,porar=0,porap=0,m=0; 
        cout<<"digite 20 notas " <<endl; 
        for (int j=0; j<=19; j++)
        {cin>>nota[j];
        
        s=s+nota[j];
        pro=s/20;}
        cout<<"el promedio del grupo es : "<<pro<<endl;           
        for ( int j=0; j<=19; j++) 
        if(nota[j]>6)
        ap=ap+1;
        else r=r+1;
        cout<<"el total de estudiantes que aprobaron es: "<<ap<<endl;
        cout<<"el total de estudiantes que reprobaron es: "<<r<<endl;
        porap=(ap*100)/20;
        porar=(r*100)/20;
        cout<<"el porcentaje de reprobados es: "<<porar<<"%"<<" el porcentaje de aprobados es: "<<porap<<"%"<<endl;
       for ( int j=0; j<=19; j++)  
        if(nota[j]>8)
         m=m+1;
         cout<<"estudiantes con nota mayor a 8 es: "<<m<<endl;
                system("pause");
}
