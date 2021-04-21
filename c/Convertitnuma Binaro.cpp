#include "stdio.h"
#include "conio.h" 
# include "iostream.h"
main() 
{ int vector[11],i,num=0,acu=1024; 
cout<<"Introduzca el numero a convertir"<<endl; 
scanf("%d",&num);
for(i=0;i<=10;i++) 
{ 
  if(num-acu>=0) 
  { 
  num=num-acu; 
  acu=acu-(acu/2); 
  vector[i]=1; 
  } 
  else 
  { 
  acu=acu-(acu/2); 
  vector[i]=0; 
  } 
} 
cout << "\t el numero en binario es: "<<endl;
for(i=0;i<=10;i++) 
printf("%d",vector[i]); 
getch(); 
} 
