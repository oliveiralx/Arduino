#include <stdio.h>
#include <stdlib.h>
main()
{
	int a[8],b[8], cont;
	for(cont=0;cont<8;cont++)
	{
		printf("Vetor A[%d]: ", cont);
		scanf("%d", &a[cont]);		
	}
	
	for(cont=0;cont<8;cont++)
	{
		b[cont] = a[cont] * 3;	
		printf("\nMultiplicacao[%d]: %d", cont, b[cont]);	
	}
}
