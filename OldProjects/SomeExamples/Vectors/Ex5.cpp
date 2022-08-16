#include <stdlib.h>
#include <stdio.h>

int main()
{
	int cont, A[20], B[20];
	for(cont=0; cont<=20; cont++)
	{
		printf("informe o vetA[%d]: ", cont);
		scanf("%d", &A[cont]);
	}
		for(cont=0; cont<=20; cont++)
	{
		B[cont] = A[cont]*A[cont];
		printf("\n VetB[%d]: %d", cont, B[cont]);
	}
}
