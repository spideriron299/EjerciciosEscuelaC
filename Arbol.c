#include <stdio.h>
#include <dos.h>

void main()
  {
	 int columnas,nestrellas,espacio,i,tronco,ltronco,k,j;



	 clrscr();
	 printf("Cuantas columnas:\n");
	 scanf("%d",&columnas);

	 for(i=1;i<=columnas;i++)
	 {
		 nestrellas=i*2-1;
		 espacio=i+columnas-nestrellas;
		 for(j=0;j<espacio;j++)
		 {
			 printf("%c",' ');
		 }
		 for(k=0;k<nestrellas;k++)
		 {
			 cprintf("%c",'*');
		 }
		 printf("\n");
	 }

	 for(tronco=0;tronco<3;tronco++)
	 {
		 for(ltronco=0;ltronco<(columnas*2+1)/2;ltronco++)
		 {
			 printf("%c",' ');
		 }
		 printf("%c\n",'*');
	 }
	 getch();
 }