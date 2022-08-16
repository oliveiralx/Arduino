#include <stdlib.h>
#include <stdio.h>

main()
{
	int cont, A[20], B[20], C[20];
	for(cont=0; cont<=20; cont++)
	{
		printf("Informe o vet A[%d]: ", cont);
		scanf("%d", &A[cont]);
		
		printf("Informe o vet B[%d]: ", cont);
		scanf("%d", &B[cont]);
	}
	
	system("cls");
	
	for(cont=0; cont<=20; cont++)
	{
		C[cont] = A[cont] - B[cont];
		printf("\nVetor A[%d] - B[%d] = C[%d]", A[cont], B[cont],C[cont]);		
	}
}
