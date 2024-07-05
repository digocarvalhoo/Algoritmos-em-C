#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");
	int i, numero, soma = 0;

	for (i = 1; i <= 10; i++)
	{
		printf("Digite um número:\n");
		scanf("%d", &numero);

		// Verifica se o número digitado é maior que 10
		if (numero <= 10)
		{
			soma = soma + numero;
		}
		else
		{
			printf("número maior que 10. Será ignorado.\n");
		}
	}
	printf("A soma dos números é: %d\n", soma);

	system("pause");
	return 0;
}
