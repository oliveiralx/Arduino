#include<stdio.h>
#include<stdlib.h>
int id;
void categoria (void);
main()
{
	printf("Informe Idade: ");
	scanf("%d", &id);
	system("cls");
	categoria();
}

void categoria(void)
{
	if((id>=5) &&(id<=7))
	{
		printf("Categoria Infantil A");
	}
	if((id>=8) &&(id<=10))
	{
		printf("Categoria Infantil B");
	}
	if((id>=11) &&(id<=13))
	{
		printf("Categoria Juvenil A");
	}
	if((id>=14) &&(id<=17))
	{
		printf("Categoria Juvenil B");
	}
	if(id>=18)
	{
		printf("Categoria Adulto");
	}
	if(id<5)
	{
		printf("Categoria Invalida");
	}
}
