#include <stdlib.h>
#include <stdio.h>

main()
{
	int cont, PESO[10], ALTURA [10], baixo, obeso, normal, acima;
	float imc;
	for(cont=0; cont<=10; cont++)
	{
		printf("Informe seu peso[%d]: ", cont);
		scanf("%d", &PESO[cont]);
		
		printf("Informe sua altura[%d]: ", cont);
		scanf("%d", &ALTURA[cont]);
	}
	
	for(cont=0; cont<=10; cont++)
	{
		imc = PESO[cont]/ALTURA[cont] * ALTURA[cont];
		
		if(imc < 18,5)
		{
			baixo = baixo + 1;
		}
		
		if((imc > 18,5) && (imc < 25))
		{
			normal = normal + 1;
		}
		
	    if((imc > 25) && (imc < 30))
		{
			acima = acima + 1;
		}
		
		if(imc > 30)
		{
			obeso = obeso + 1;
		}
	}
	printf("\nPessoas abaixo do peso: %d", baixo);
	printf("\nPessoas com peso normal: %d", normal);
	printf("\nPessoas acima do peso: %d", acima);
	printf("\nPessoas obesas: %d", obeso);
}
