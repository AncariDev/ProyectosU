#include <iostream.h>
#include <conio.h>

class ListaD {
      	  int info;
      	  ListaD*sig;
      	  ListaD*ant;
      	  public:
     	             void crearCabezaD(ListaD*&,int);
         	         void crearNodosD(ListaD*,int);
         	         void crearListaD(ListaD*&);
         	         void escribirListaD(ListaD*);
         	         void escribirListaaD(ListaD*);
                     void agregarNodoD(ListaD*&);
                     void buscarNodoD(ListaD *&,ListaD*&,ListaD *&,int ); 
                     void borrarNodoD(ListaD *&, int);
	         };
	  

void ListaD:: crearListaD (ListaD*&cab)
{
     ListaD*aux=NULL;
     int x;
     cout<<"informacion="<<endl;
     cin>>x;
     while(x!=0)
          {if (cab==NULL)
              {crearCabezaD(cab,x);
	          }
	      else
	          {aux=cab;
               while(aux->sig!=NULL)
	                {aux=aux->sig;
	                }
	     crearNodosD(aux,x);
           }	 
    	 cout<<"informacion=";
           cin>>x;
	 }
}

void ListaD::crearCabezaD(ListaD*&cab,int x)
{
     cab=new ListaD;
     cab->info =x;
     cab-> sig =NULL;
     cab-> ant =NULL;
}      
              
void ListaD::crearNodosD(ListaD* aux,int x)
{
     ListaD *aux2=aux;
     aux->sig=new ListaD;
     aux=aux->sig;
     aux->info=x;
     aux->sig=NULL;
     aux->ant=aux2;
 //    aux2=au2->sig;
}


void ListaD::escribirListaD(ListaD*cab)
{
     while(cab!=NULL)
          {cout<<"info="<<cab->info<<endl; 
           cab=cab->sig;
	      }
           }
void ListaD::escribirListaaD(ListaD*cab)
  {     while(cab->sig!=NULL)  
             {cab=cab->sig;}
       while(cab!=NULL)      
             {cout<<"lista alreves"<<"info="<<cab->info<<endl;
              cab=cab->ant;}

}

void ListaD:: agregarNodoD(ListaD*& cab)
{ int x;
  ListaD *  aux=cab;

  cout<<"digite el valor que desea agregar"<<endl;
  cin>>x;
  while(aux->sig!=NULL)
      {aux=aux->sig;}
     crearNodosD(aux,x);
     escribirListaD(cab);
}

  void ListaD::buscarNodoD(ListaD*&cab,ListaD *&aux2, ListaD *&aux, int x)
   {
     aux=cab;
     aux2=cab;
    while ((aux!=NULL) && (aux->info!=x) )
            {
            aux2=aux;
            aux=aux->sig;
            cout<<"si"<<endl;
                }
        cout<<"termino"<<endl;    
        if (aux==NULL)
           cout<<"Dato no encontrado"<<'\n';
} 

void ListaD:: borrarNodoD(ListaD *&cab, int x)
         {
                    
             ListaD *aux2=NULL,*aux=NULL;
             buscarNodoD(cab,aux2,aux,x);
            
             if(aux!=NULL){
                if (aux==cab)
                   cab=aux->sig;
                else
                    aux2->sig=aux->sig;
             delete aux;     
             }
    }

int main(void)
{int x;
     ListaD*cab=NULL,objeto;
     objeto.crearListaD(cab);
     objeto.escribirListaD(cab);
     objeto.escribirListaaD(cab);
     objeto.agregarNodoD(cab); 
      cout<<"Dato a borrar";
      cin>>x;
     objeto.borrarNodoD(cab,x);
     objeto.escribirListaD(cab);
    // getch();
    system ("pause");
}
