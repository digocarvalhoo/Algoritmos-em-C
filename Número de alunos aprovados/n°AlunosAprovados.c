#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");
	int codigo, nnotas, i, naprovados, nreprovados;
	float nota, soma, media;

	naprovados = 0;
	nreprovados = 0;

	printf("Insira o número de notas da disciplina:\n");
	scanf("%d", &nnotas);
	printf("Insira o código do aluno:\n");
	scanf("%d", &codigo);

	// O código mostra o resultado final, quando o codigo do aluno for igual a zero

	while (codigo != 0)
	{
		soma = 0;
		for (i = 0; i < nnotas; i++)
		{
			printf("Insira a nota do aluno:\n");
			scanf("%f", &nota);
			soma = soma + nota;
		}
		media = soma / nnotas;
		if (media >= 6)
		{
			naprovados++;
		}
		else
		{
			nreprovados++;
		}

		printf("Insira o código do aluno:\n");
		scanf("%d", &codigo);
	}

	printf("O número de aprovados é: %d\n", naprovados);
	printf("O número de reprovados é: %d\n", nreprovados);

	system("pause");
	return 0;
}
