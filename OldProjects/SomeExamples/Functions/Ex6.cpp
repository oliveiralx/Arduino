#include<stdio.h>
#include<stdlib.h>
int hrs, min;
void horas (void);
main()
{
	printf("Informe as horas: ");
	scanf("%d", &hrs);
	horas();
}
void horas(void)
{
	min = hrs * 60;
	printf("Minutos: %d", min);
}

