# include "iostream.h"
int main()
{ 
    int man[6],i;
    cout<<"digite 6 numeros"<<endl;
    for(i=0;i<=5;i++)
    {cin>>man[i];
    for(int j=i;j>=0;j--)
    if (man[i]==man[j])
    cout<<"digite otro valor"<<endl;}
   
}
