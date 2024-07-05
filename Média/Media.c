#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");

	float media;

	printf("Insira a nota do aluno: ");
	scanf("%f", &media);

	if (media >= 7)
	{
		printf("Aprovado direto! \n");
	}
	else
	{
		if (media >= 4)
		{
			printf("Prova Substituta! \n");
		}
		else
		{
			printf("Reprovado! \n");
		}
	}
	system("pause");
	return 0;
}
