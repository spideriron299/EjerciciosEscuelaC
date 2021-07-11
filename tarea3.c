#include <stdio.h>
#include <conio.h>
// Elaborado por Diego Badillo Aguilar 611
//Hacer un programa que indique el nivel escolar de una persona de acuerdo 
// a la edad proporcionadad por el usuario
main(){
	int edad;
	printf("Dame tu edad= ");
	scanf("%d", &edad);
	switch(edad){
		case 1 ... 3:
			printf("Guarderia \n");
			break;
		case 4 ... 5:
			printf("kinder \n");
			break;
		case 6 ... 12:
			printf("Primaria \n");
			break;
		case 13 ... 15:
			printf("Secundaria \n");
			break;
		case 16 ... 18:
			printf("Bachillerato \n");
			break;
		case 19 ... 22:
			printf("Licenciatura \n");
			break; 
		case 23 ... 26:
			printf("Maestria \n");
			break;
		case 27 ... 120:
			printf("Doctorado \n");
			break;
		default:
			printf("Opcion invalida \n");}
	return(0);
	getch();
			
	
}
