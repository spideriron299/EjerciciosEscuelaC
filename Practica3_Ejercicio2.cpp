//Calculadora de numeros complejos.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

struct complejo
{
	float r, i;
	
}cmp1, cmp2, ress, rest, resm, resd;

complejo suma(complejo a, complejo b);
complejo resta(complejo a, complejo b);
complejo mult(complejo a, complejo b);
complejo div(complejo a, complejo b);

int main(){
	int menu;

	printf("\t\tEL EQUIPO 5 PRESENTA:");
	printf("CALCULADORA DE MATRICES\n");
	printf("\t\tPrimero ingresaremos los valores\n");
	printf("\nParte real del complejo 1: ");
	scanf("%f", &cmp1.r);
	printf("Parte imaginaria del complejo 1: ");
	scanf("%f", &cmp1.i);
	
	printf("Parte real del complejo 2: ");
	scanf("%f", &cmp2.r);
	printf("Parte imaginaria del complejo 2: ");
	scanf("%f", &cmp2.i);
	system ("CLS");
	printf("Perfecto! Estamos listos para las operaciones\n");
	
	do	{
		
		printf("Que operacion desas hacer?\n");
		printf("1) Sumar los numeros\n");	
		printf("2) Restar los numeros\n");	
		printf("3) Multiplicar los numeros\n");	
		printf("4) Dividir los numeros\n");	
		printf("5) Salir\n");
		
		scanf("%d", &menu);
		switch(menu){
			case 1:	
			ress = suma(cmp1,cmp2);
			printf("\n El resultado de la suma es %.0f + %.0fi\n\n", ress.r, ress.i);	
			printf("Presiona cualquier tecla para continuar o cierra la ventana.\n");
			getch();
			system ("CLS");
			break;
			
			
			case 2:
			rest = resta(cmp1,cmp2);	
			printf("\n El resultado de la resta es %.0f + %.0fi\n\n", rest.r, rest.i); 
			printf("Presiona cualquier tecla para continuar o cierra la ventana.\n");
			getch();			
			system ("CLS");
			break;
			
			case 3:
			resm = mult(cmp1,cmp2);	
			printf("\n El resultado de la multiplicacion es %.0f + %.0fi\n\n", resm.r, resm.i); 
			printf("Presiona cualquier tecla para continuar o cierra la ventana.\n");
			getch();			
			system ("CLS");
			break;
			
			case 4:
			resd = div(cmp1,cmp2);
			printf("\n El resultado de la division es %.0f + %.0fi\n\n", resd.r, resd.i); 
			printf("Presiona cualquier tecla para continuar o cierra la ventana.\n");
			getch();			
			system ("CLS");
			break;
			
			case 5:	
			printf("Hasta luego :D\n"); 
			getch();
			system ("CLS");
			break;
			
		
			default: 
			printf("Seleccione una opcion valida\n"); break;	
		}	
	} while (menu != 5);
	
}
complejo suma(complejo a, complejo b){
	
	complejo sum; 
	sum.r = a.r + b.r; 
	sum.i = a.i + b.i;
	return sum;
}
complejo resta(complejo a, complejo b){
	
	complejo resta;
	resta.r = a.r - b.r;
	resta.i = a.i - b.i;
	return resta;
}
complejo mult(complejo a, complejo b){
	
	complejo mult;
	mult.r = a.r*b.r + -(a.i*b.i);
	mult.i = a.r*b.i + a.i*b.r;
	return mult;
}
complejo div(complejo a, complejo b){
	
	complejo div;
	float denominador = pow(b.r, 1) + -pow(b.i, 1);
	div.r = (a.r*b.r + -(a.i*-b.i))/denominador  ;
	div.i = (a.r*-b.i + a.i*b.r)/denominador ;
	
	return div;
}
