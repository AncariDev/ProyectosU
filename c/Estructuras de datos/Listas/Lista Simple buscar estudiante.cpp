#include <iostream.h>
#include <string.h>

// adiciona n nodos estudiantes
// busca uno y lo borrar
// Muestra los estudiantes q quedaron en lista.

class Estudiante
{ long int codigo;
  char nombre[100];
  char carrera[100];
  float promedio;
  Estudiante *sig;
       
  public:
   
     void crearEstudiante(Estudiante *&);
     void crearCabeza(Estudiante *&, long int , char[] ,char [],float);
     void adicionarNodos(Estudiante *,long int, char[] ,char [],float);
     void mostrarEstudiante(Estudiante *);
     void buscarEstudiante(Estudiante*&,Estudiante*&,Estudiante*&,int);
     void borrarEstudiante(Estudiante *&, int);
};

void Estudiante::crearEstudiante(Estudiante *&cab)
   {
    int x;
     char nom[100],car[100];
     long int cod;
     float prom;
     Estudiante *aux=NULL;
   cout<<"digite 1 si desea agregar un estudiante, sino digite 0"<<endl;
    cin>>x;
     do
     {
          cout<<"digite codigo"<<endl;
          cin>>cod;    
          cout<<"digite nombre"<<endl;
          cin>>nom;
          cout<<"digite carrera"<<endl;
          cin>>car;
          cout<<"digite promedio"<<endl;
          cin>>prom;      
           if (cab==NULL)
           {crearCabeza(cab,cod,nom,car,prom);}
           else 
           {aux=cab;
            while(aux->sig!=NULL)
            {aux=aux->sig;
            }
            adicionarNodos(aux,cod,nom,car,prom);
           }
          cout<<"digite 1 si desea agregar un estudiante, sino digite 0"<<endl;
          cin>>x;
     }while  (x!=0); 
        
}
void Estudiante::crearCabeza(Estudiante *&cab,long int cod,char nom[],char car[],float prom)
   {cab=new Estudiante;
    cab->codigo=cod;
    strcpy(cab->nombre,nom);
    strcpy(cab->carrera,car);
    cab->promedio=prom;
    cab->sig=NULL;
   }

void Estudiante::adicionarNodos(Estudiante*aux,long int cod,char nom[],char car[],float prom)
   {aux->sig=new Estudiante;
    aux=aux->sig;
    aux->codigo=cod;
    strcpy(aux->nombre,nom);
    strcpy(aux->carrera,car);
    aux->promedio=prom;
    aux->sig=NULL;
   }      



void Estudiante::mostrarEstudiante(Estudiante *cab)
  { while(cab!=NULL)
     {cout<<"codigo= "<<cab->codigo<< "\t";
      cout<<"nombre= "<<cab->nombre<<"\t";
      cout<<"carrera= "<<cab->carrera<<"\t";
      cout<<"promedio= "<<cab->promedio<<endl;
     cab=cab->sig;
     }
  }
  

 void Estudiante::buscarEstudiante(Estudiante*&cab, Estudiante *&aux2,Estudiante *&aux,int x)
    { 
    
     cout<<"digite el codigo del estudiante que desea borrar"<<endl;
     cin>>x;			 
     aux=cab;                                           
     aux2=cab;
    while ((aux->codigo!=x) && (aux!=NULL))
            {
            aux2=aux;
            aux=aux->sig;
            }
        if (aux==NULL)
           cout<<"Dato no encontrado"<<'\n';
} 

void Estudiante:: borrarEstudiante(Estudiante *&cab, int x)
         {
                    
             Estudiante *aux2=NULL,*aux=NULL;
             buscarEstudiante(cab,aux2,aux,x);
            
             if(aux!=NULL){
                if (aux==cab)
                   cab=aux->sig;
                else
                    aux2->sig=aux->sig;
             delete aux;     
             }
    }
main()
{int x;
   Estudiante *cab=NULL,objeto;
   objeto.crearEstudiante(cab);
   objeto.borrarEstudiante(cab,x);
   objeto.mostrarEstudiante(cab);
   system("pause");
} 
