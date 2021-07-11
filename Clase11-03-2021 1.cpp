#include<stdio.h>
#include<stdlib.h>

main(){
	
	float *ap;
	int n;
	printf("De que tamaño es el arreglo");
	scanf("%d",&n);
	
	ap=(float*)malloc(n*sizeof(float));//Reservar memoria dinámica
	
	for(int i=0; i<n; i++){
		printf("Dame el valor de A[%d] ",i);
		scanf("%f",(ap+i));//aritmpetica de apuntadores
	}
	
	for(int i=0;i<n;i++)
	printf("%.2f ",ap[i]);//Recoorrido por indice
	
	
}

