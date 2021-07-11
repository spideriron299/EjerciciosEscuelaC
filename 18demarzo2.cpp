#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int a,b;	
	nodo *nuevo;
};

main()
{
	nodo *nnodo;

	nnodo = (nodo*)malloc(sizeof(nodo));

	printf("Dame el primer numero entero\n");
	scanf("%d", &nnodo->a);	
	
	printf("Dame el sugundo numero entero\n");
	scanf("%d", &nnodo->b);	
	
	printf("Dame los elementos a de nnodo\n");
	scanf("%d", nnodo->nuevo->a);
	
}
