#include<stdio.h>
#include<stdlib.h>
int num;
void nums (void);
main()
{
	printf("Informe um numero: ");
	scanf("%d", &num);
	system("cls");
	nums();
}
void nums(void)
{
	if (num %2==0)
	{
		printf("Par");
	}
	else
	printf("Impar");
}
