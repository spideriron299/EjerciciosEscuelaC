// DIEGO PITO LOCO BADILLO AGUILAR

#include <stdio.h>
#include <stdlib.h>

main(){
	int c1, c2, f1, f2, i, j, comprobar=1;
	int matriz_a[f1][c1], matriz_b[f2][c2], matriz_suma[f1][c1], matriz_resta[f2][c2];

    while(comprobar==1){
        // MATRIZ A
        printf("\nDEFINE LAS DIMENSIONES DE LA MATRIZ A\n");
        printf("\nFILAS: ");
        scanf("%d", &f1);
        printf("\nCOLUMNAS: ");
        scanf("%d", &c1);
        
        for(i=1;i<=c1;i++){
            for(j=1;j<=f1;j++){
                printf("\nVALOR FILA %d, COLUMNA %d: ", i, j);
                scanf("%d", &matriz_a[f1][c1]);
            }
        }

        printf("\nTU MATRIZ A ES:\n\n");
        for(i=1;i<=f1;i++){
            for(j=1;j<=c1;j++){
                printf("\t%d", matriz_a[f1][c1]);
            }
            printf("\n\n");
        }

        // MATRIZ B
        printf("\nDEFINE LAS DIMENSIONES DE LA MATRIZ B\n");
        printf("\nFILAS: ");
        scanf("%d", &f2);
        printf("\nCOLUMNAS: ");
        scanf("%d", &c2);
        
        for(i=1;i<=c2;i++){
            for(j=1;j<=f2;j++){
                printf("\nVALOR FILA %d, COLUMNA %d: ", i, j);
                scanf("%d", &matriz_b[f2][c2]);
            }
        }

        printf("\nTU MATRIZ B ES:\n\n");
        for(i=1;i<=f2;i++){
            for(j=1;j<=c2;j++){
                printf("\t%d", matriz_b[f2][c2]);
            }
            printf("\n\n");
        }

        if((f1==f2 && c1==c2) && (f1>0&&f2>0&&c1>0&&c2>0) && (f1+f2+c1+c2>4)){
            comprobar=0;
        }
        else{
            
            printf("\n\t\tLO SIENTO\n\tLAS DIMENSIONES DE SU MATRIZ SON DIFERENTES ENTRE SI\n\t\tO SUS MATRICES SON DE 1X1 o 0X0\n\t\tINTENTELO DE NUEVO:\n");
        }
    }

    // SUMA
    for(i=1;i<=c1;i++){
        for(j=1;j<=f1;j++){
            matriz_suma[i][j]=matriz_a[i][j]+matriz_b[i][j];
        }
    }

    printf("\nTU MATRIZ SUMADA ES:\n\n");
    for(i=1;i<=f1;i++){
        for(j=1;j<=c1;j++){
            printf("\t%d", matriz_suma[f1][c1]);
        }
        printf("\n\n");
    }

    // RESTA
    for(i=1;i<=c2;i++){
        for(j=1;j<=f2;j++){
            matriz_resta[i][j]=matriz_a[i][j]-matriz_b[i][j];
        }
    }

    printf("\nTU MATRIZ RESTADA ES:\n\n");
    for(i=1;i<=f2;i++){
        for(j=1;j<=c2;j++){
            printf("\t%d", matriz_resta[f2][c2]);
        }
        printf("\n\n");
    }
    // MULTIPLICACION

    // DIVISION

	return 0;
}
