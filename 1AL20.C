#include <stdio.h>
#include <conio.h>
//Diego Badillo Aguilar 611
//Este programa hace una lista del 1 al 20
main(){
	int contar;
	clrscr();
	contar=1;

	while (contar<=20){
		printf("%d, ", contar);
		contar=contar+1;
	}
	printf("\n");
getch();
}