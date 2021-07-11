#include <stdio.h>
#include <conio.h>

void mayor_a_menor(int arreglo[], int lon) {
  int Temp, i, j;
  for (i = 0; i < lon; i++) {
    for (j = 0; j < lon - 1; j++) {
      if (arreglo[j] < arreglo[j + 1]) { // cambia "<" a ">" para cambiar la manera de ordenar 
        Temp = arreglo[j];
        arreglo[j] = arreglo[j + 1];
        arreglo[j + 1] = Temp;
      }
    }
  }
 
  for (i = 0; i < lon; i++) {
    printf("%d ", arreglo[i]);
  }
}
void menor_a_mayor(int arreglo[], int lon) {
  int Temp, i, j;
  for (i = 0; i < lon; i++) {
    for (j = 0; j < lon - 1; j++) {
      if (arreglo[j] > arreglo[j + 1]) { // cambia "<" a ">" para cambiar la manera de ordenar 
        Temp = arreglo[j];
        printf()
        arreglo[j] = arreglo[j + 1];
        arreglo[j + 1] = Temp;
      }
    }
  }
 
  for (i = 0; i < lon; i++) {
    printf("%d ", arreglo[i]);
  }
}
 
int main() {
 
  int lon, n, num;

	printf("Dulce Itzel Iglesias Romero");
	getch();
	system("CLS");

    printf("Hola! Este programa te va a ayudar a ordenar numeros de mayor a menor o viceversa segun tu preferencia!\n ");

  
  printf("Presiona enter para continuar.");
  
  getch();
   system("CLS");
   
  printf("¿Cuantos valores deseas capturar?:");
  scanf("%d", & lon);
  int arr[lon], i;
  for (i = 0; i < lon; i++) {
    printf("Ingresa el numero %d: ", i + 1);
    scanf("%d", & n);
    arr[i] = n;
  }
 
  printf("\¿Que deseas hacer? : \n");
  printf("1: Ordenar de mayor a menor\n");
  printf("2: Ordenar de menor a mayor\n");
  printf("2: Salir\n");
  
  scanf("%d", &num);
  
  	switch(num){
  				//Caso 1 Ordenar de mayor a menor
  		case 1: 
  		  		mayor_a_menor(arr, lon);
  		  		break;
  			
  				//Caso 2 Ordenar de menor a mayor
  		case 2:
  			 	menor_a_mayor(arr, lon);
  			 	break;
  				//Caso 3 salir;
  		case 3: 
  				printf("Adios!");
  				break;
	  }
   
  return 0;
}
