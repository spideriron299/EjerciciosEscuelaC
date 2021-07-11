#include <stdio.h>
#include <stdlib.h>
//Lista ligada circular
struct nodo{
	int dato; 
	nodo *siguiente;
	nodo *anterior;
		
};

nodo *primero = NULL;
nodo *ultimo = NULL;

void insertarNodo(); 
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void mostrarLista();

main(){

int op;
 	printf("\nBuen dia, que accion desea realizar?\n");
	printf("1.- Ingresar dato\n");
	printf("2.- Buscar dato\n");
	printf("3.- Modificar dato\n");
	printf("4.- Eliminar dato\n");
	printf("5.- Mostrar datos");
	printf("6.- Salir\n");
	scanf ("%i",&op);

 	do{
	 
 	switch (op){
 	 
 	case 1:
 	 	 insertarNodo(); 
	 	break;
	case 2:	
		 buscarNodo(); 
		 break;	
	case 3:
		 modificarNodo(); 
		 break;	
	case 4: 
		 eliminarNodo();
		 break;
	case 5:
		 mostrarLista();
	case 6: 
		 printf("Adios\n");
		 break;
	 }
}while(op<6);
 	}

void insertarNodo(){
	int x;
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));
	printf("Ingresa el dato: \n");
	scanf("%i", &nuevo->dato);
	if(primero==NULL){
		primero=nuevo;
		primero->siguiente=primero;
		ultimo=primero;
		primero->anterior=ultimo;
	}else{
		
		ultimo->siguiente=nuevo; //El siguiente de nuevo va a ser el ultimo
		nuevo->siguiente=primero; //El siguiente de nuevo va a ser el primero
		nuevo->anterior=ultimo;
		ultimo=nuevo;
		primero->anterior=ultimo;
	}
	printf("El dato fue ingresado.\n");
}

void buscarNodo(){
	int nodoBuscar, encontrado=0;
	nodo *actual=(nodo*)mallc(sizeof(nodo));
	actual=primero;
	printf("Cual es el dato a buscar?: \n");
	scanf("%i", &nodoBuscar);
	if(primero1=NULL){
		do{
			if(actual.anterior->dato=nodoBuscar){
				printf("Tu dato fue encontrado :D\n");
				encontrado=1;
			}
			actual=actual->siguiente;
		}while(actuual!=primero && encontrado==0);
	}if(encontrado==0){
		printf("No se encontro el dato D:\n");
	}else{
		printf("La lista esta vacia o:\n");
	}
}

void modificarNodo(){
	int nodoBuscar, encontrado=0;
	nodo *actual=(nodo*)mallc(sizeof(nodo));
	actual=primero;
	printf("Cual es el dato a buscar?: \n");
	scanf("%i", &nodoBuscar);
	if(primero1=NULL){
		do{
			if(actual.anterior->dato=nodoBuscar){
				printf("Tu dato fue encontrado :D\n");
				if(actual==primero){
					primero=primero->siguiente;
					primero->anterior=ultimo;
					ultimo->siguiente=primero;
				}else if(actual==ultimo){
					ultimo=anterior;
					ultimo->siguiente=primero;
					primero->anterior=ultimo; //El anterior de primero sera el ultimo
					
				}else{
					anterior->siguiente=actual->siguiente
				}
				
				encontrado=1
			}
			actual=actual->siguiente;
		}while(actuual!=primero && encontrado==0);
	}if(encontrado==0){
		printf("No se encontro el dato D:\n");
	}else{
		printf("La lista esta vacia o:\n");
	}	
}


