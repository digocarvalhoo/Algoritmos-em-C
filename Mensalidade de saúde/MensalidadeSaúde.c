#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

	setlocale(LC_ALL, "");

	char nome[30];
	int idade;

	printf("\nInsira o nome da pessoa: \n");
	scanf("%s", nome);

	printf("\nInsira a idade da pessoa: \n");
	scanf("%d", &idade);

	printf("\nNome do cliente: %s\n", nome);
	printf("\nIdade do cliente: %d\n", idade);

	if (idade <= 18)
	{
		printf("\nO valor do plano é: R$ 50,00\n");
	}
	else
	{
		if ((idade >= 19) && (idade <= 29))
		{
			printf("\nO valor da mensalidade é R$ 70,00\n");
		}
		else
		{
			if ((idade > 30) && (idade < 45))
			{
				printf("\nO valor da mensalidade é: R$ 90,00\n");
			}
			else
			{
				if ((idade > 46) && (idade < 65))
				{
					printf("\nO valor da mensalidade é R$ 130,00\n");
				}
				else
				{
					printf("\nO valor da mensalidade é R$ 170,00\n");
				}
			}
		}
	}

	system("pause");
	return 0;
}
