# include "iostream.h"
main ()
{int i,x;float vector[5],au;
cout << "digite 5 valores"<< endl;
for (i=0;i<=4;i++)
cin>>vector[i];
for (x=0;x<=3;x++)
{for (i=x+1;i<=4;i++)
   {if (vector[x]>vector[i])
    {au=vector[i];
    vector[i]=vector[x];
    vector[x]=au;}
    }
}
cout<< "los datos ordenados son:"<< endl;
for (i=0;i<=4;i++)
cout<< vector[i]<<endl;
system ("pause");
}
