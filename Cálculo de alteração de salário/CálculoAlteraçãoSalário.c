#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

	setlocale(LC_ALL, "");

	float salario, aumento, salario_final;
	int cargo;

	printf(" 1 Servente \n 2 Pedreiro\n");
	printf("Insira o codigo do cargo: \n");
	scanf("%d", &cargo);

	printf("Insira o valor do salário:\n");
	scanf("%f", &salario);

	switch (cargo)
	{
	case 1:
		aumento = salario * 0.4;
		salario_final = salario + aumento;
		printf("O Servente teve aumento de R$%.2f e agora recebe R$%.2f\n", aumento, salario_final);
		break;
	case 2:
		aumento = salario * 0.35;
		salario_final = salario + aumento;
		printf("O Pedreiro teve aumento de R$%.2f e agora recebe R$%.2f\n", aumento, salario_final);
		break;
	}
	return 0;
}
