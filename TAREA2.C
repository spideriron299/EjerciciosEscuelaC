#include <stdio.h>
#include <conio.h>
//Programa que permite realizar suma,resta, multiplicacion o division segun quiera el usuario
//Diego Badillo Aguilar 611
main (){
 float n1, n2, op, op2;
 float s, r, m, de, dr;

 clrscr();
 printf("Dame el primer numero\n");
 scanf("%g", &n1);
 printf("Dame el segundo numero\n");
 scanf("%g", &n2);
 clrscr();
 printf("Escribe el numero correspondiente a la operacion deseada\n");
 printf("1 Suma\n");
 printf("2 Resta\n");
 printf("3 Multiplicacion\n");
 printf("4 Division \n");
 scanf("%g", &op);
 if(op==1){

  s=n1+n2;

  printf("El resultado de la suma es %g", s);
  getch();
  }
  else{
  if(op==2){
	 r=n1-n2;
	 printf("El resultado de la resta es %g", r);
	 getch();
	 }
	 	else{
	 		if(op==3){
	 		m=n1*n2;
			printf("El resultado de la multiplicacion es %g", m);
			getch();
			 }			
	 		else{
				if(op==4){
				clrscr();
				printf("Que tipo de division?");
				printf("\n");
				printf("1 Division entera");
				printf("\n");
				printf("2 Division con decimal");
				printf("\n");
				scanf("%g", &op2);
				if(op2==1){
				clrscr();
					de=n1/n2;
					printf("El resultado de la division entera es %0.0g", de);
					getch();
					}
					  else{

	 	 		    	dr=n1/n2;
						printf("El resultado de la division con decimal es %0.2g", dr );
						getch();
					  }


	}
	
	
}
}
}
  }

  




