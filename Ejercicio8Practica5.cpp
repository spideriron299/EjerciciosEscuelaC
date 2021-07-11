#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main(){
	int num[10], x;
	
	//Aplicamos memoria dinamica
	int **nnum=(int**)malloc(sizeof(int*)*10);
	
	//Generacion de numeros aleatorios
	for(int i=0; i<10;i++){
		x= rand()%10;
		num[i]=x;
	}
	
	//arreglo del mismo n apuntadores donde cada 
	//uno apunte a los números anteriores. 
	
	for(int i=0; i<5; i++){
		nnum[i]= &num[i];
	}
	
	//Imprimimos los resultados
	printf("Arreglo original:\t\n");
		for(int i=0; i<5; i++){
		printf("%d", num[i]);
	}
	
	printf("\nArreglo con las apuntadores\t\n");
		for(int i=0; i<5; i++){
		printf("%d", **(nnum+i));
	}
		
}
