#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");
	int num, par, impar;
	par = 0;
	impar = 0;

	printf("O programa encerra quando digitar o número 0 \n");
	printf("Insira um números:\n");
	scanf("%d", &num);

	while (num != 0)
	{
		if (num % 2 == 0)
		{
			par++;
		}
		else
		{
			impar++;
		}
		printf("Insira um números:\n");
		scanf("%d", &num);
	}

	printf("Quantidade de números pares: %d\n", par);
	printf("Quantidade de números ímpares: %d\n", impar);

	return (0);
	system("Pause");
}
