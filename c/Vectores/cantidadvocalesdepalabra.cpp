# include "iostream.h"
# include "conio.h"
main()
{char palabra[30];int i,total=0;
cout<<"digite un palabra "<<endl;
gets (palabra);
for (i=0;i<=29;i++)
{if (palabra[i]=='a'|| palabra[i]=='A')
total=total+1;
if (palabra[i]=='e'|| palabra[i]=='E')
total=total+1;
if (palabra[i]=='i'|| palabra[i]=='I')
total=total+1;
if (palabra[i]=='o'|| palabra[i]=='O')
total=total+1;
if (palabra[i]=='u'|| palabra[i]=='U')
total=total+1;}
cout<<"la palabra tiene:  "<<total<<"  vocales "<<endl;
system ("pause");
}
