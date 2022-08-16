#include<stdio.h>
#include<stdlib.h>
int num;
void numint (void);
main()
{
	printf("Informe um numero: ");
	scanf("%d", &num);
	system("cls");
	numint();
}
void numint(void)
{
	if (num > 0)
	{
		printf("Positivo");
	}
	else
	printf("Negativo");
}
