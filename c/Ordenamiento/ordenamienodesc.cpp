# include "iostream.h"

int main()
  {
 
int a=0, b=0, c=0, d=0;
        cout<<"digite tres numeros"<<endl;
           cin>>a>>b>>c;
       
   if (a>=b){
          if(a>=c){ 
             if (b>=c){
                cout<<a<<b<<c<<endl;}
             else{ d=c,c=b,b=d;
                cout<<a<<b<<c<<endl;}
                 
             }
           else{ d=c, c=b, b=a, a=d;
           cout<<a<<b<<c<<endl;}     
}
   else {
  	if (b>=c){
		   d=a, a=b, b=d;
     		   if (b<=c){
     				d=c, c=b, b=d;
			        cout<<a<<b<<c<<endl;}
		   }
   else{ d=a, a=c, c=d;
   cout<<a<<b<<c<<endl;}     
      }
}                                 
