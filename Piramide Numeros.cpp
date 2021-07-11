#include <stdio.h>
#include <math.h>

int main(){
    float hipotenusa,cateto_1,cateto_2;

    printf("Ingrese el valor de un cateto: ");
    scanf("%f",&cateto_1);
    printf("Ingrese el valor del otro cateto: ");
    scanf("%f",&cateto_2);

    hipotenusa=sqrtf(powf(cateto_1,2)+powf(cateto_2,2));

    printf("La hipotenusa del triangulo es: %.2f\n",hipotenusa);

    return 0;
}
