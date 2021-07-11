#include <stdio.h>

int fib(int indice)
{
	int resultado = 0;
	if (indice == 0 || indice == 1)
		resultado = indice;
	else
		resultado = fib(indice - 1) + fib(indice - 2);

	return resultado;
}

int main(void)
{
	int fibo = 0;
	printf("cuantos numeros de fibonacci necesitas?\n");
	scanf("%d",&fibo);

	for (; fibo; --fibo)
		printf("%d ", fib(fibo));

	return 0;
}
