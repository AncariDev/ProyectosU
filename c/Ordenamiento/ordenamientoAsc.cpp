#include "iostream.h"
main()
{ int valor[3], i,j, aux=0;
cout<<"digite 3 valores"<<endl;
for(i=0;i<=2; i++)
             {
              cin>>valor[i];}
              for(j=0; j<=2;j++)
                 {for(i=j+1; i<=2;i++)
                   { if (valor[j]>valor[i])
                      { 
                        aux = valor[i];
                        valor[i]=valor[j];
                        valor[j]=aux;
                      }
                   }
                 }cout<<"valor ordenado"<<endl;
                   for (i=0; i<=2; i++)
                 {
                     cout<<valor[i]<<endl;}
              system("pause");
}
                
        
               
