#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
		int y=3,x=5,num;
		do {
			printf("diz um numero");
			scanf_s("%d", &num);
			if()
			printf("%d", (num %y));
			printf("%d", (num %x));
		} while (num == 0);
		}