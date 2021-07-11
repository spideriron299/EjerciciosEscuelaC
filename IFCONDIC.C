#include <stdio.h>
#include <conio.h>
//Elaborado por Diego Badillo Aguilar 611
//Hacer un programa que indique el nivel de escolaridad del una persona
//de acuerdo a ala edad proporcionada por el usuario
main(){
	int edad;
	clrscr();
	printf("Dame tu edad=");
	scanf("%d", &edad);

	if((edad>=0)&&(edad<=3)){
		printf("guarderia\n");
		getch();
	  }else
	  if((edad>=4)&&(edad<=5)){
		printf("kinder\n");
		getch();
	  }else
	  if((edad>=6)&&(edad<=12)){
		printf("Primaria\n");
		getch();
		}else
	  if((edad>=13)&&(edad<=15)){
		printf("Secundaria\n");
		getch();
		}else
	  if((edad>=16)&&(edad<=18)){
		printf("Bachillerato\n");
		getch();
	  }else
	  if((edad>=19)&&(edad<=22)){
		printf("Licenciatura\n");
		getch();
	  }else
	  if((edad>=23)&&(edad<=26)){
		printf("Maestria\n");
		getch();
	  }else
	  if((edad>=26)&&(edad<=134)){
		printf("Doctorado\n");
		getch();
	  }
}

















