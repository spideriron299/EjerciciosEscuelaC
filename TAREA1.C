#include <stdio.h>
#include <conio.h>
//Diego Badillo Aguilar 611
//Programa que haga suma, resta, multiplicacion, division entera y decimal
main(){

 float num1, num2;
 float rdiv, rsm, rrst, rmult, rdiv1;

 clrscr();
 printf("Dame el primer numero \n");
 scanf("%g", &num1);
 printf ("Dame el segundo numero \n");
 scanf ("%g", &num2);
 
	rdiv=num1/num2;
	rdiv1=num1/num2;
	rsm=num1+num2;
	rrst=num1-num2;
 	rmult=num1*num2;

 printf ("El resultado de la suma es %g", rsm );
 printf (" \n");
 printf ("El resultado de la resta es %g", rrst );
 printf ("\n");
 printf ("El resultado de la multiplicacion es %g", rmult );
 printf ("\n");
 printf ("El resultado de la division sin decimal es %0.0g", rdiv );
 printf ("\n");
 printf ("El resultado de la divison con decimal es %0.2g", rdiv1 );
 printf ("\n");
 printf ("Elaboro =Diego Badillo =D \n");
 getch ();
}


