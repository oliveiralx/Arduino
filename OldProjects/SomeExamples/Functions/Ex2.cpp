#include<stdio.h>
#include<stdlib.h>
int id;
float ida;
void anos (void);
main()
{
	printf("Informe Idade: ");
	scanf("%d", &id);
	anos();
}
void anos(void)
{
	ida = id * 365;
	printf("Sua idade em dias e: %f", ida);
}

