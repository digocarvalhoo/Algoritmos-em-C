#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int idade;

	printf("Insira a idade:\n");
	scanf("%d", &idade);

	if (idade < 16)
	{
		printf("Não eleitor\n\n");
	}
	else
	{
		if ((idade > 18) && (idade < 65))
		{
			printf("Eleitor Obrigatorio\n\n");
		}
		else
		{
			printf("facultativo\n\n");
		}
	}
	system("Pause");
	return 0;
}
