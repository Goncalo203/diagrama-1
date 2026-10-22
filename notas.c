#include <stdio.h>
int main(void)
{
	float notas;
	printf("Diz ai a nota: ");
	scanf_s("%f", &notas);
	if(notas<9.5)
	{
		printf("reprovado");
	}
	else
	{
		printf("aprovado");
	}
	return 0;
}