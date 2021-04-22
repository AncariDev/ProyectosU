#include "iostream.h"
int main()
{
    int matrix[3][3],i,vec[3],j,k, acu=0;
    cout<<"digite 9 numeros"<<endl;
    for(i=0; i<=2; i++)
        {for(j=0; j<=2; j++)
             cin>>matrix[i][j];}
    cout<<"digite 3 numeros"<<endl;
    for(k=0; k<=2; k++)
      cin>>vec[k];
  
   //comparar
   for (i=0; i<=2; i++)
       {for(j=0; j<=2; j++)
          acu=0;
             {for(k=0; k<=2; k++)
                 { if(matrix[i][j]==vec[k])
                    { acu=acu+1;
                    } 
                 }     
                    
             }
       }cout<<acu<<"\t"<<vec[k];
             
           
             
          system ("pause");
    }
