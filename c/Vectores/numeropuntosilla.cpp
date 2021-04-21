# include "iostream.h"
main ()
{int i,j=0;float numero[6],total[4];
cout << "digite 6 valores"<< endl;
for (i=0;i<=5;i++)
cin>>numero[i];
for (i=1;i<=4;i++)
if ((numero[i]>numero[i-1]) && (numero[i]<numero[i+1]))
{total[j]=numero[i];
j++;}
cout<<"los numeros puntosilla son:"<<endl;
for (i=0;i<=j-1;i++)
cout<<total[i]<<endl;
system ("pause");
}
