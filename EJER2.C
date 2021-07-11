#include <stdio.h>
#include <conio.h>
int main(){
//Badillo Aguilar Diego 611
 //Declaracion de variables
 int a = 10;
 int b = 2;
 float res1, res2, res3, res4, res5, res6;

 //Operaciones
 res1 = (float)b / (float)a;
 res2 = (float)b / a;
 res3 = b / (float)a;
 res4 = 2/10.0;
 res5 = (float)(b / a);
 res6 = (float)(2/10);

 clrscr();
 //Escritura por pantalla
 printf("%0.2f %0.2f %0.2f %0.2f %0.2f %0.2f \n", res1, res2, res3, res4, res5, res6);
 printf("\n");
 printf("Elaboro Diego Badillo\n");
 getch();
}