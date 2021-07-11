/* Implementar una lista doblemente ligada con las funciones 
buscar, insertar, borrar y mostrar
Diego Badillo Aguilar
*/
#include <stdio.h>
#include <stdlib.h>
 struct nodo{
 	int dato;
 	nodo *siguiente;
 	nodo *anterior;
 	
 };
 nodo *primero=NULL;
 nodo *ultimo=NULL;
 void insertarNodo();
 void buscarNodo();
 void modificarNodo();
 void eliminarNodo();
 void mostrarLista();
 main(){
 	int op;
 	do{
 	
 		
 	printf("\nBienvenido a lista ligada con funciones!\n");
 	printf("Elije la opcion que gustes \n");
	printf("1.- Ingresar dato\n");
	printf("2.- Buscar dato\n");
	printf("3.- Modificar dato\n");
	printf("4.- eliminar dato\n");
	printf("5.- mostar dato\n");
	printf("6.- Salir\n");
	scanf ("%i",&op);

 	
 	
 	switch (op){
 	 case 1:
	 insertarNodo ();
	 break;	
	 case 2:
	 buscarNodo ();
	 
	 break;	
	 case 3:
	 modificarNodo ();
	 
	 break;	
	 case 4:
	 eliminarNodo ();
	 break;	
	 case 5:
	 mostrarLista ();
	 break;
	 case 6:
	 printf("Adios.\n");
	 break;
 		
 	}
     }while(op<6);

 }
 void insertarNodo(){
 	int x;
 	
	 nodo *nuevo=(nodo*)malloc(sizeof(nodo));
 	printf("ingresa el dato.\n");
 	scanf("%i",&nuevo->dato);
	   if(primero==NULL){
		   	primero=nuevo;
		   	primero->siguiente=primero;
		   	ultimo=primero;
		   	primero->anterior=ultimo;
	   	
	   }
		   else{
			   	ultimo->siguiente=nuevo; //El siguiente de nuevo va a ser el ultimo
			   	nuevo->siguiente=primero;
			   	nuevo->anterior=ultimo;
			   	ultimo=nuevo;
			   	primero->anterior=ultimo;
		   }
   printf("dato ingresado.\n");	
 }
 void buscarNodo(){
 	int nodoBuscado,encontrado;
 	encontrado=0;
 	
	 nodo *actual=(nodo*)malloc(sizeof(nodo));
 	
	 actual=primero;
 	printf("ingresa el dato que quieras buscar.\n");
 	scanf("%i",&nodoBuscado);
 	if(primero!=NULL){
 		do{
 			if(actual->dato=nodoBuscado){
 				printf("tu dato fue encontrado.\n");
 				encontrado=1;
 			}
 			actual=actual->siguiente;
 		}while(actual!=primero && encontrado==0);
 		if(encontrado==0){
 			printf("no se encontro el dato");
 		}
 	}else{
 		printf("la lsita esta vacia.\n");
 	}
 }
void modificarNodo(){
	int nodoBuscado,encontrado;
 	
	 encontrado=0;
 	
	 nodo *actual=(nodo*)malloc(sizeof(nodo));
 	actual=primero;
 	printf("ingresa el dato que quieras buscar.\n");
 	scanf("%i",&nodoBuscado);
 	if(primero!=NULL){
 		do{
 			if(actual->dato==nodoBuscado){
 				printf("tu dato fue encontrado.\n");
 				printf("dame el nuuevo dato.\n");
 				scanf("%i",&actual->dato);
 				
 				encontrado=1;
 			}
 			actual=actual->siguiente;
 		}while(actual!=primero && encontrado==0);
 		if(encontrado==0){
 			printf("no se encontro el dato");
 		}
 	}else{
 		printf("la lsita esta vacia.\n");
 	}
	
}
void eliminarNodo(){
	int nodoBuscado,encontrado;
	
 	encontrado=0;
 	nodo *actual=(nodo*)malloc(sizeof(nodo));
 	actual=primero;
 	nodo *ant=(nodo*)malloc(sizeof(nodo));
 	ant=NULL;
 	
 	printf("ingresa el dato que quieras buscar.\n");
 	scanf("%i",&nodoBuscado);
 	if(primero!=NULL){
 		do{
 			if(actual->dato==nodoBuscado){
 				printf("tu dato fue encontrado.\n");
 				if(actual==primero){
 					primero=primero->siguiente;
 					primero->anterior=ultimo;
 					ultimo->siguiente=primero;
 					
 				}else if(actual==ultimo){
 					ultimo=ant;
 					ultimo->siguiente=primero;
 					primero->anterior=ultimo;
 				
 				}else{
 					ant->siguiente=actual->siguiente;
 					actual->siguiente->anterior=ant;
 				}
 				printf("nodo eliminado.\n");
 				encontrado=1;
 			}
 			ant=actual;
 			actual=actual->siguiente;
 		}while(actual!=primero && encontrado==0);
 		if(encontrado==0){
 			printf("no se encontro el dato");
 		}
 		else{
 			free(ant);
 		}
 	}else{
 		printf("la lista esta vacia.\n");
 	}
}
void mostrarLista(){
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	if(primero!=NULL){
		do{
			printf("%i\t.\n",actual->dato);
			actual=actual->siguiente;
		}while(actual!=primero);
	}else{
		printf("la lista esta vacia.\n");
	}
}

 
