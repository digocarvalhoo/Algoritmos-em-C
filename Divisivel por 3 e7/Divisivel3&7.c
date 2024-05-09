#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");
	int num;

	printf("Informe o número: \n");
	scanf("%d", &num);

	if ((num % 3 == 0) && (num % 7 == 0))
	{
		printf("O número é divisivel por 3 e por 7\n");
	}
	else
	{
		printf("O número não é divisivel por 3 nem 7\n");
	}

	system("pause");
	return 0;
}
