#include <stdio.h>
#include <conio.h>
void main(){
int num, residuo, cont;
clrscr();
textmode(C80);
textcolor(GREEN);
printf("Por favor dame el numero\n");
scanf("%d",&num);

residuo= ( num % 5 );
num=num-residuo;

cont=0;

do{

 cprintf("%d, " ,num);
 num=num-5;
 cont=cont+1;

 if (cont==10){
 printf("\n");
 cont=0;
 }
 } while (num>0);
 cprintf("0.");
 getch();
}