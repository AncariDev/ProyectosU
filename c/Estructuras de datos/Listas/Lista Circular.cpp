#include <iostream.h>
#include <conio.h>

//Crea ista circular
//adiciona 10 numeros
// ordena y muestra
// pide buscar un numero de los ingresados.

class ListaC {
      	  int info;
      	  ListaC*sig;
      	  public:
     	         void crearCabezaC(ListaC*&,int);
         	         void agregarNodosC(ListaC*&,int);
         	         void crearListaC(ListaC*&);
         	         void buscarNodoC(ListaC *&); 
         	         void ordenarListaC(ListaC*&);  
	         void escribirListaC(ListaC*);
	         };                             
	         
void ListaC::crearCabezaC(ListaC*&cab,int x)
{
     cab=new ListaC;
     cab->info =x;
     cab-> sig =cab;
}

void ListaC::agregarNodosC(ListaC*& cab,int x)
{
    ListaC *aux=NULL;
    aux=new ListaC;         //creo el nodo
    aux->info=x;        
    aux->sig=cab->sig;
    cab->sig=aux;         //cab apunte a el nodo auxiliar
    //aux->sig=cab;          //aux apunte a cabeza
    cab=aux;                 //cab pasa a la pocision de aux
}

void ListaC:: crearListaC (ListaC*&cab)
{
     ListaC*aux=NULL;
     int x;
     cout<<"informacion="<<endl;
     cin>>x;
     while(x!=0)
          {if (cab==NULL)
              {crearCabezaC(cab,x);
	          }
	      else
	          agregarNodosC(cab,x);
           
	           cout<<"informacion=";
	          cin>>x;
              
          }   
}


void ListaC::buscarNodoC(ListaC*&cab)
{int x,b=0;
    cout<<"digite informacion a buscar"<<endl;
    cin>>x;
    ListaC *aux=NULL;
    aux=cab->sig;
      while (aux!=cab)
       {
         if (aux->info==x)
           b=1 ;
           aux=aux->sig;
         }      
         
       if(cab->info==x)
              cout<<"elemento encontrado  "<<cab->info<<endl; 
       else    
       {   if (b==1)
           cout<<"elemento encontrado  "<<x<<endl;
           else   
           cout<<"no existe"<<endl;
        }   
}
      

void ListaC::ordenarListaC(ListaC *&cab)
{        int x;
     
       ListaC *auxe=cab->sig;
       ListaC *auxi=cab->sig; 
        do
        {
              do
              {              
                  if (auxe->info>auxe->sig->info)
                     { x=auxe->info;
                       auxe->info=auxe->sig->info;
                       auxe->sig->info=x;
                     }
                 auxe=auxe->sig;              
              } while(auxe!=cab);
               auxe=cab->sig;
               auxi=auxi->sig;
        }
       while(auxi!=cab);
       cout<<"Lista organizada"<<endl;
       //   while (cab!=NULL)
       //    {
       //     cout<<cab->info<<endl;
       //     cab=cab->sig;
          // }
}     

void ListaC::escribirListaC(ListaC*cab)
{
     ListaC*aux=cab->sig;
     while(aux!=cab)
          {cout<<"info= "<<aux->info<<endl;
          aux=aux->sig;
	}
	cout<<"info= "<<aux->info<<endl;
}      

int main(void)
{
     ListaC*cab=NULL,objeto;
     objeto.crearListaC(cab);
     objeto.ordenarListaC(cab);
     objeto.escribirListaC(cab);
     objeto.buscarNodoC(cab);
     getch();
}
