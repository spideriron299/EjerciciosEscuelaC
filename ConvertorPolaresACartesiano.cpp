#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main( ){
	double y, x, resultadox, resultadoy;
	double operacionX (double x, double y);
	double operacionY (double x, double y);
	
	printf("Ingrese el valor de R: \n");
	scanf("%lf", &x);

	
	printf("Ingrese el valor del angulo:	 \n");
	scanf("%lf", &y);

	resultadox= operacionX(x, y);
	resultadoy= operacionY(x, y);
	
	printf("Las rectangulares son %lf para X y %lf para Y", resultadox, resultadoy);
}

double operacionX (double a, double b){
	double coseno, resultado;

	 coseno = cos ( b * PI / 180.0 );
	resultado= a*coseno;
	return resultado;
}

double operacionY ( double a, double b){
	double resultado, seno;

 	seno = sin ( b * PI / 180.0 );
	resultado= a*seno;
	return resultado;
}

