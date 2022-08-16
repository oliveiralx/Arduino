#include <stdio.h>
#include <stdlib.h>
main()
{
	int a[15], b[15], c[30], cont;
	for(cont=0;cont<15;cont++)
	{
		printf("Vetor A[%d]: ", cont);
		scanf("%d", &a[cont]);
		printf("Vetor B[%d]: ", cont);
		scanf("%d", &b[cont]);
		c[cont] = a[cont];
	}
	for(cont=0;cont<15;cont++)
	{
		c[cont] = b[cont];
	}
}
