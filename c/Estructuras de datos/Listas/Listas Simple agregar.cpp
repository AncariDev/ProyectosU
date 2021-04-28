#include"iostream.h"
 #include"conio.h" 

//Agrega a una lista de nodos 5 numeros, 
//pide buscar un numero
// Cambia de posicion los nodos 1 y ultimo
// pide un nuevo numero para adicionarlo a la lista
//busca los numeros pares de los nodos
// Ordena los nodos por numero.

class Lista {
      int info;
      Lista *sig;
      
  public:
         void crearCabeza(Lista *&, int);
         void adicionarNodos(Lista *,int);
         void crearLista(Lista *&);
         void escribirLista(Lista *);
         void buscarNodo(Lista *&); 
        void cambiarNodo(Lista *);
         void paresLista(Lista*);  
        void ordenarLista(Lista*&);
        void agregarNodo(Lista*&);
  };
   
   void Lista::crearCabeza(Lista *&cab,int x)
   {cab=new Lista;
     cab->info=x;
     cab->sig=NULL;
   }
   void Lista::adicionarNodos(Lista*aux,int x)
   {aux->sig=new Lista;
    aux=aux->sig;
    aux->info=x;
    aux->sig=NULL;
 }      
void Lista::crearLista(Lista*&cab)
   { Lista*aux=NULL;
         int x;
         cout<<"informacion"<<endl;
         cin>>x;
       while(x!=0)
     {if (cab==NULL)
           {crearCabeza(cab,x);
           }
          else 
          {aux=cab;
            while(aux->sig!=NULL)
            {aux=aux->sig;
            }
            adicionarNodos(aux,x);
          }
           cout<<"informacion="<<endl;
           cin>>x;
      }
  }
  
void Lista::escribirLista(Lista*cab)
  {while (cab!=NULL)
   {
    cout<<"informacion="<<cab->info<<endl;
    cab=cab->sig;
   }           
  }
            
void Lista::buscarNodo(Lista*&cab)
   {int x,b=0;
       cout<<"digite informacion a buscar"<<endl;
    cin>>x;
    Lista *aux=NULL;
    aux=cab;
      while (aux!=NULL)
       {
         if (aux->info==x)
           b=1 ;
           aux=aux->sig;
         }      
        if (b==1)
        cout<<"elemento encontrado  "<<x<<endl;
            else   
           cout<<"no existe"<<endl;
      }
      
void Lista::cambiarNodo(Lista* cab)
   {int x;
    Lista*aux=NULL;
     aux=cab;
     x=cab->info;
      while(aux->sig!=NULL)
      {aux=aux->sig;}
       cab->info=aux->info;
       aux->info=x;
      cout<<"el primer nodo ahora vale "<<cab->info<<" el ultimo nodo ahora vale "<<aux->info<<endl;  
    }
       
void Lista::paresLista(Lista* cab)
      {Lista*aux=NULL;
      aux=cab;
       while (aux!=NULL)
        {if((aux->info%2)==0)
          {cout<<"los pares son "<<aux->info<<endl;}
          aux=aux->sig;
        }
       }
                 
         
void Lista::ordenarLista(Lista *&cab)
{      int x;
       Lista *auxi=cab->sig;
       Lista *auxe=cab;
        
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
              } while(auxe->sig!=NULL);
               auxe=cab;
               auxi=auxi->sig;
        }
        while(auxi!=NULL);
        cout<<"Lista organizada"<<endl;
          while (cab!=NULL)
           {
            cout<<cab->info<<endl;
            cab=cab->sig;
           }
       }
  
void Lista:: agregarNodo(Lista*& cab)
{ int x;
  Lista *  aux=cab;

  cout<<"digite el valor que desea agregar"<<endl;
  cin>>x;
  while(aux->sig!=NULL)
      {aux=aux->sig;}
      adicionarNodos(aux,x);
}

 main()
{
  
   Lista*cab=NULL,objeto;
   objeto.crearLista(cab);
   objeto.escribirLista(cab);
   objeto.buscarNodo(cab);
   objeto.cambiarNodo(cab);
   objeto.paresLista(cab); 
   objeto.agregarNodo(cab); 
   objeto.ordenarLista(cab);
system("pause");
  } 
