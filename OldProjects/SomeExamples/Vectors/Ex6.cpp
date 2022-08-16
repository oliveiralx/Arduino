#include <stdlib.h>
#include <stdio.h>

main()
{
	int cont = 0, A[15];
	float med, igual =0, maior=0, menor=0;
	for(cont=0; cont<=15; cont++)
	{
		printf("Informe a nota do aluno[%d]: ", cont);
		scanf("%d", &A[cont]);
	}
	
		for(cont=0; cont<=15; cont++)
	{
		med = A[cont];// programa está com erro aqui!!!!
		
		if(med == 6)
		{
			igual = igual + 1;
		}
		
		if(med > 6)
		{
			maior = maior + 1;
		}
		
		if(med < 6)
		{
			menor = menor + 1;
		}
	}
	printf("\nAlunos com media igual: %f", igual);
	printf("\nAlunos com media maior: %f", maior);
	printf("\nAlunos com media menor: %f", menor);
}
