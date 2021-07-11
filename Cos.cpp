/* cos example */
#include <stdio.h> /* printf */
#include <math.h> /* cos */
#define PI 3.14159265
int main ()
{
double angulo, resultado, x;

	printf("Ingrese el valor de P(x): \n");
	scanf("%lf", &x);

 resultado = cos ( x * PI / 180.0 );
 printf ("El coseno de %.2f grados is %.2f\n", x, resultado );
return 0;
}


