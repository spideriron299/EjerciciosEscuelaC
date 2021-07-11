#include <conio.h>
#include <stdio.h>

int main(void){

	int fibonacci[1000],y,z,cont,cont2,elec;
	clrscr();

	y=2;
	fibonacci[0]=0;
	fibonacci[1]=1;
	
	printf("Dime el numero\n");
	scanf("%d", &elec);
	
	printf("La serie Fibonacci es esta: ");

	for(cont=2;cont<=elec;cont=cont+1){
		fibonacci[y]=fibonacci[y-2]+fibonacci[y-1];
		y++;
}
	for(y=0;fibonacci[y]<=elec;y++){
	printf("%d, ",fibonacci[y]);
}
	y--;
	printf("\nLa serie invertida es: ");
	for(y=y;y>=0;y--){
		printf("%d, ",fibonacci[y]);
    }
getch();
}

