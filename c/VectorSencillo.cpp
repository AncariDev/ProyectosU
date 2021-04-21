# include "iostream.h"
main ()
{int i,x;float vector[3],au;
cout << "digite 3 valores"<< endl;
for (i=0;i<=2;i++)
cin>>vector[i];
au=vector[2];
for (i=2;i>=0;i--)
if (vector[i]==0)
vector[i]=au;
else
vector[i]=vector[i-1];
cout<<"el vector al correrlo queda:"<<endl;
for (i=0;i<=2;i++)
cout<<vector[i]<<endl;
system ("pause");
}

