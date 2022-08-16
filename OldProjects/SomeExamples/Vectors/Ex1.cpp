#include <stdio.h>
#include <stdlib.h>
main()
{
	int a[15], cont, soma = 0;
	for(cont=0;cont<5;cont++)
	{
		printf("Vetor A[%d]: ", cont);
		scanf("%d", &a[cont]);		
	}
	
	for(cont=0;cont<5;cont++)
	{
		soma = soma + a[cont];		
	}
	printf("\nSoma: %d", soma);
}
