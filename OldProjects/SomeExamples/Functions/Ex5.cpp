#include<stdio.h>
#include<stdlib.h>
float a, b, h;
void area (void);
main()
{
	printf("Informe a Base: ");
	scanf("%f", &b);
	
	printf("Informe a Altura: ");
	scanf("%f", &a);
	h = b * a;
	area();
}
void area(void)
{
	h = b * a;
	printf("Area: %f", h);
	
}
