#include<stdio.h>
void insertar();
void eliminar();
void mostrar ();
int pila[10],i=0;
int main(){
	int op;
	do{
		
	
	printf("Que opcion desea realizar?\n1.- Insertar\n2.-Eliminar\n3.-Mostrar\n4.-Salir\n");
	scanf("%i",&op);
	switch(op){
		case 1:
		insertar();
		break;
		case 2:
		eliminar();
		break;
		case 3:
		mostrar();
		break;
		case 4:
		printf("hasta la vista baybe\n");
		break;
		default:
		printf("opcion no valida\n");
		break;	
	}
} while(op!=4);
}


