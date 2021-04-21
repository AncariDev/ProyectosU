# icnclude "iostream.h"
# include "stdlib.h"

int main()
{
int ale[6];

for(int i=0; i<=5; i++){
  ale[i]= rand ()%46;

   for (int j=i; j>=0; j--)
{	if (ale[i]== ale [j])
	   ale[j]=rand()%46;
}
}
   for (int i=0;i<=5;i++){
	   cout<<ale[i]<<endl;
}
   system ("pause");
}
   
   
   
   
   
