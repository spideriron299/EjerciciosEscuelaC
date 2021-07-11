#include <stdio.h>
#include <conio.h>
void main (){
float cals [100], suma, promedio;
int cont;
clrscr();
printf ("Programa que obtiene el promedio de 5 calificaciones \n");
cont =0;
do {
printf("\n Dame una calificacion ");
scanf ("%f",&cals[cont]);
suma = suma + cals[cont];
cont++;
}while (cont <5);
promedio = suma/5;

printf("\n Mostrando calificaciones \n");

do {
cont--;
printf(" %2.2f, ",cals[cont]);

}while (cont >0);

printf("\n El promedio es %2.2f ", promedio);

getch();
}