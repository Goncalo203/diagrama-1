#include<stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int num,x;
	printf("Diz um numero"); 
	scanf_s("%d",&num);
	for (x = 1; x < 11; x++) 
	{
		printf("%d", (num * x));
		printf("\n");
	}
	return 0;
}