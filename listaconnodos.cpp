#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct nodo{
	int dato;
	nodo *siguiente;
	
}; //Sirve para ligar con los otros nodos , Un nodo es la unidad minima de la lista contendra la informacion que se requiera 

nodo *lista;
void insertar();
int eliminar();
void mostrar(nodo *siguiente);
void comprobar(nodo *siguiente);
main(){
	int op;
	do{
	printf("\tBienvenido a Cola con Nodos\n");
	printf("Elige una opcion.\n");
	printf("1.- Insertar.\n");
	printf("2.- Eliminar\n");
	printf("3.- Mostrar.\n");
	printf("4.- Comprobar si la cola esta vacia o no. \n");
	printf("5.- Salir\n");
	scanf("%i",&op);
	switch (op){
		case 1:
			insertar();
			printf("Presiona ENTER para continuar");			
			getch();
			system("CLS");
			break;
		case 2:
		printf("se elimino el dato: %d",eliminar());	
			printf("Presiona ENTER para continuar");			
			getch();
			system("CLS");
			break;

		case 3:
			mostrar(lista);
			printf("Presiona ENTER para continuar");			
			getch();
			system("CLS");
			break;

		case 4:
			comprobar(lista);
			printf("Presiona ENTER para continuar");			
			getch();
			system("CLS");
			break;

		case 5:
			printf("Nos vemos pronto ;)\n");
			printf("Presiona ENTER para continuar");			
			getch();
			system("CLS");
			break;
	}
}
while (op<5);
}
void insertar(){

	nodo *q=(nodo*)malloc(sizeof(nodo));
	q->siguiente=lista;
	printf("ingresa el nuevo dato a la lista.\n");
	scanf("%i",&q->dato);
	lista=q;
	
}
int eliminar(){
	int nodobuscado=0,bandera=0;
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=lista;
	nodo *anterior=(nodo*)malloc(sizeof(nodo));
	anterior=NULL;//inicializando el nodo
	printf("que dato deseas eliminar.\n");
	scanf("%i",&nodobuscado);
	if(lista!=NULL){
		do{
			if(actual->dato==nodobuscado){
				bandera=1;
				if(actual==lista){
					lista=lista->siguiente;
				}
				else{
					anterior->siguiente=actual->siguiente;
				}
			}
			anterior=actual;
			actual=actual->siguiente;
		}
		while(actual!=NULL && bandera==0);
	}
	if(bandera==1){
		free(anterior);
	}
	return nodobuscado;
}
void mostrar(nodo *siguiente){

	nodo *indice=lista;
	while(indice!=NULL){
			printf("El valor es %d.\n",indice->dato);
			indice=indice->siguiente;
			
	}

}
void comprobar(nodo *siguiente){

	nodo *indice=lista;
	if(indice!=NULL){
			printf("La pila NO esta vacia\n");}
			else{
				printf("La pila esta vacia\n ");
			}
					
	}



