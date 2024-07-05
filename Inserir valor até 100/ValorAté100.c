#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int soma = 0;
	int valor;

	while (soma < 100)
	{
		printf("Insira um valor:\n");
		scanf("%d", &valor);
		soma = soma + valor;
		
	}

	system("pause");
	return 0;
}
