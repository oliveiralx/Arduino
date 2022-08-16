#include<stdio.h>
#include<stdlib.h>
float med;
void medf (void);
main()
{
	printf("Informe sua media final: ");
	scanf("%f", &medf);
	medf();
}
void medf(void)
{
	if((med>=0.0) &&(med<=4.9))
	{
		printf("D");
	}
	if((med>=5.0) &&(med<=6.9))
	{
		printf("C");
	}
	if((med>=7.0) &&(med<=8.9))
	{
		printf("B");
	}
	if((med>=9.0) &&(med<=10.0))
	{
		printf("A");
	}
}
