#include <stdio.h>
#
main(){
	
 int M[3][3]={0};
 int N[3][3]={0};
 int elemento[3][3]={0};
 int i,j, Op;
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("\n Introduce la cifra [%d] [%d] para rellenar la matriz 1: ",i, j);
 scanf("%d", &M[i][j]); }
 	 }
 
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("\n Introduce la cifra [%d] [%d] para rellenar la matriz 2: ",i, j);
 scanf("%d", &N[i][j]); }
 }


printf("\n Vamos a sumar las matrices: \n\n");

 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("%3d", N[i][j]); 
 }
 printf("\n");
 }
 printf("\n +\n\n");
 
 for(i=0; i<3; i++){ for (j=0; j<3; j++){
 printf("%3d", M[i][j]); 
 }
 printf("\n");
 }
 printf("\n =\n");
 
 
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 
 elemento[i][j]=M[i][j]+N[i][j];
 }
 }
 
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("%3d",elemento[i][j]);
 }
 printf("\n");
 } 

 	
printf("\n Vamos a restar las matrices: \n\n");

 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("%3d", N[i][j]); 
 }
 printf("\n");
 }
 printf("\n -\n\n");
 
 for(i=0; i<3; i++){ for (j=0; j<3; j++){
 printf("%3d", M[i][j]); 
 }
 printf("\n");
 }
 printf("\n =\n");
 
 
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 
 elemento[i][j]=M[i][j]-N[i][j];
 }
 }
 
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("%3d",elemento[i][j]);
 }
 printf("\n");
 
 printf("\n Ahora vamos a dividir las matrices: \n\n");

 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("%3d", N[i][j]); 
 }
 printf("\n");
 }
 printf("\n Entre \n\n");
 
 for(i=0; i<3; i++){ for (j=0; j<3; j++){
 printf("%3d", M[i][j]); 
 }
 printf("\n");
 }
 printf("\n =\n");
 
 
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 
 elemento[i][j]=M[i][j]/N[i][j];
 }
 }
 
 for(i=0; i<3; i++){
 for (j=0; j<3; j++){
 printf("%3d",elemento[i][j]);
 }
 printf("\n");
 } 
 }  
 	
 	
}
