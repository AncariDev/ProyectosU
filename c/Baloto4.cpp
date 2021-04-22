#include<iostream.h>
#include<cstdlib> //srand
#include<ctime> // liberia para time 


struct puntoventa{
       char nit[10];
       char tel[20];
       char nomb[30];
       int m[6][6];
       };

int main()

{  int op,balo[6],aux,j,s,l,acierto=0, gan[6],w,m,c,i;
    puntoventa p[5];
    for (int i=1; i<=5; i++)
    {
        cout<<endl<<"digite el nombre del punto de venta "<<i<<endl;
        cin>>p[i].nomb;
        cout<<"digite el nit del punto de venta"<<endl;
        cin>>p[i].nit;
        cout<<"digite el telefono de este punto"<<endl;
        cin>>p[i].tel;
          for (int num=0; num<6; num++)
          {do {
              cout<<endl<<"seleccione como desea su baloto, 1 manual, 2 automatico"<<endl;
              cin>>op;
              }while(op>2 || op<1);
               if (op == 1)  //manual
                {for (int j=0; j<6; j++)
                 {
                     cin>>balo[j];
                      {if (j>0)
                          { l=j-1;
                            s=0;
                            while (l>=0 && s==0)
                                  {
                                   if (balo[j]<=45 && balo[j]>0)//rechasa numeros mayore
                                   l=l-1;
                                   else
                                   s=1;
                                  }
                                  if(s==1)
                                  j=j-1;
                          }   
                      } 
                      {if (j>0)
                          { l=j-1;
                            s=0;
                            while (l>=0 && s==0)
                                  {
                                   if (balo[j]!=balo[l])//compara si hay iguales
                                   l=l-1;
                                   else
                                   s=1;
                                  }
                                  if(s==1)
                                  j=j-1;
                           }
                      } 
                      {if (balo[j]>=0)
                          { l=j-1;
                            s=0;
                            while (l>=0 && s==0)//negativos
                                  {
                                   if (balo[j]>0)
                                   l=l-1;
                                   else
                                   s=1;
                                  }
                            if(s==1)
                            j=j-1;
                          }
                       } 
              }//cin


  //ordena
  for(int l=0;l<=4;l++)
  {for(int j=l+1;j<=5;j++)
   {if(balo[l]>balo[j])
    {aux=balo[j];
     balo[j]=balo[l];
     balo[l]=aux;
    }  
   }
  }

  
                 }
                
               else//automatico
               {
                 srand(time (0));
 

 for(int n=0;n<=5;n++)
  {balo[n]=(1+rand()%45);
  if (n>0)
  {
          j=n-1;
          s=0;
          while (j>=0 && s==0)
          {
                if (balo[n]!=balo[j])
                j=j-1;
                else
                s=1;
          }
                if(s==1)
                n=n-1;
  }
  }  // organiza el vector
      for(int j=0;j<=4;j++)
      {for(int i=j+1;i<=5;i++)
       {if(balo[j]>balo[i])
        {aux=balo[i];
         balo[i]=balo[j];
         balo[j]=aux;
         }  
        }
       }                                
                   }
                   cout<<endl<<"Su numero a jugar es"<<endl;
               for (int g=0; g<6; g++)
                 {
                     p[i].m[num][g]=balo[g];
                     cout<<p[i].m[num][g]<<"\t";
   }
                 }
              
                                     
 }   
   //ganador   
       {for(int m=0;m<=5;m++)
           {gan[m]=(1+rand()%45);
            if (m>0)
               {
                w=m-1;
                c=0;
                while (w>=0 && c==0)
                     {
                      if (gan[m]!=gan[w])
                      w=w-1;
                      else
                      c=1;
                     }
                if(c==1)
                m=m-1;
                }
           }
        }
  for(int w=0;w<=4;w++)
     {for(int m=w+1;m<=5;m++)
         {if(gan[w]>gan[m])
            {aux=gan[m];
             gan[m]=gan[w];
             gan[w]=aux;
            }  
          }
      }
cout<<endl;
cout<<"¡ *numeros del baloto ganador* !"<<endl;

for(int m=0;m<=5;m++)
 cout<<gan[m]<<endl;
          
           //comparacion
       for (i=1; i<6; i++)//puntos de venta
      { cout<<"punto de venta "<<i<<" "<<endl;
           for (int num=0; num<=5;num++)//filas
           {cout<<"baloto "<<num<<" "<<endl;
             acierto=0;
             for(int g=0; g<=5;g++)//columnas
               {
                 for( w=0;w<=5;w++)//vector
                   {  if( p[i].m[num][g]==gan[w])
                     acierto=acierto+1;    
                     }        
                   } 
               cout<<"numero de aciertos"<<acierto<<endl;
               if (acierto>=3)
               cout<<"***gano baloto***"<<endl;
                     }
                     }
              system("pause");
}
