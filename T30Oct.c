#include <stdio.h>
#include <conio.h>

main(){

	int nu;
	clrscr();
	printf("Dame el numero para restar de 2 en 2\n");
	scanf("%d", &nu);
	 if ( nu % 2 == 0 ){	
        printf( "ES PAR\n" );
        while (nu>0){
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		printf("\n");
		}
		printf("0.");
		printf("\n");
		printf("Elaboro Diego Badillo 611\n");
		getch();
		}
	else
        printf( "ES IMPAR\n" );
        nu=nu-1;
	while (nu>0){
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		printf("%d," ,nu);
		nu=nu-2;
		}
		getch();
		}

