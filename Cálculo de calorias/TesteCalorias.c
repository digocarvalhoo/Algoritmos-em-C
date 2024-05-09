#include <stdio.h>
#include <stdlib.h>

int main()
{
	int op;
	float total;

	total = 0;

	printf("Informe o prato desejado: \n");
	printf("1 - Italiano \n2 - Japonês \n3 - Baiana\n");
	scanf("%d", &op);

	switch (op)
	{
	case 1:
		total = total + 750;
		break;
	case 2:
		total = total + 324;
		break;
	case 3:
		total = total + 545;
		break;
	}

	printf("Informe a bebida desejada:\n");
	printf("1 - Chá \n2 - suco de laranja \n3 - refri\n");

	scanf("%d", &op);

	switch (op)
	{
	case 1:
		total = total + 30;
		break;
	case 2:
		total = total + 80;
		break;
	case 3:
		total = total + 90;
		break;
	}

	printf("O total de calorias é: %2.f", total);

	system("Pause");
	return 0;
}
