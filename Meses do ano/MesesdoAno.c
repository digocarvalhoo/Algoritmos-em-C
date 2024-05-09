#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");
	int num;

	printf("Insira o número do mês:\n");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("Janeiro");
		break;
	case 2:
		printf("Fevereiro");
		break;
	case 3:
		printf("Março");
		break;
	case 4:
		printf("Abril");
		break;
	case 5:
		printf("Maio");
		break;
	case 6:
		printf("Junho");
		break;
	case 7:
		printf("Julho");
		break;
	case 8:
		printf("Agosto");
		break;
	case 9:
		printf("september");
		break;
	case 10:
		printf("Outubro");
		break;
	case 11:
		printf("November");
		break;
	case 12:
		printf("December");
		break;
	}

	system("pause");
	return 0;
}
