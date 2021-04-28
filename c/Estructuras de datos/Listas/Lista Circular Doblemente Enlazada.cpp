#include <iostream.h>
#include <conio.h>
#include <stdio.h>

class ListaCD {
	  int info;
	  ListaCD*sig;
	  ListaCD*ant;
	  public:
		 void crearCabezaCD(ListaCD*&,int);
		 void crearNodosCD(ListaCD *&,int);
		 void crearListaCD(ListaCD*&);
		 void escribirListaCD(ListaCD*);
		 void escribirListaaCD(ListaCD*);
		 void buscarNodoCD(ListaCD *&); 
         	           void ordenarListaCD(ListaCD*&);  
		 };

void ListaCD:: crearListaCD (ListaCD*&cab)
{
     ListaCD*aux=NULL;
     int x;
     cout<<"informacion="<<endl;
     cin>>x;
     //cin>>x;
     //scanf("%d",&x);

     while(x!=0){
	if (cab==NULL){
	   crearCabezaCD(cab,x);
	   }
	else
	     crearNodosCD(cab,x);
	  cout<<"informacion=";
	  cin>>x;
	}
}

void ListaCD::crearCabezaCD(ListaCD*&cab,int x)
{
     cab=new ListaCD;
     cab->info =x;
     cab-> sig =cab;
     cab-> ant =cab;
}

void ListaCD::crearNodosCD(ListaCD  *&cab,int x)
{
    ListaCD *aux=NULL;
    ListaCD *aux2=cab->sig;
    aux=new ListaCD;
    aux->info =x;
    aux->sig=cab->sig;
    cab->sig=aux;
    aux->ant=cab;
    aux2->ant=aux;
    cab=aux;
}


void ListaCD::escribirListaCD(ListaCD*cab)
{
     ListaCD*aux=cab->sig;

     while(aux!=cab)
	  {cout<<"info= "<<aux->info<<endl;
	  aux=aux->sig;
	}
	cout<<"info= "<<aux->info<<endl;
}


void ListaCD::escribirListaaCD(ListaCD*cab)
{
     ListaCD*aux=cab;

	  cout<<"info= "<<aux->info<<endl;
	    aux=aux->ant;
	while(aux!=cab)
	  {cout<<"info= "<<aux->info<<endl;
	  aux=aux->ant;
	}

}

void ListaCD::buscarNodoCD(ListaCD*&cab)
{int x,b=0;
    cout<<"digite informacion a buscar"<<endl;
    cin>>x;
    ListaCD *aux=NULL;
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
      
      
void ListaCD::ordenarListaCD(ListaCD *&cab)
{        int x;
     
       ListaCD *auxe=cab->sig;
       ListaCD *auxi=cab->sig; 
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


 main()
{
     ListaCD *cab=NULL,objeto;
    // clrscr();
     objeto.crearListaCD(cab);
     objeto.ordenarListaCD(cab);
     objeto.escribirListaCD(cab);
     objeto.escribirListaaCD(cab);
     objeto.buscarNodoCD(cab);
    // getch();
    system ("pause");
}
