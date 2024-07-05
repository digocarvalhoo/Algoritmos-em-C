#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

	int num;
	setlocale(LC_ALL, "");

	printf("Insira um número: \n");
	scanf("%d", &num);

	if (num % 5 == 0)
	{
		printf("número %d é divisivel por 5\n", num);
	}
	else
	{
		printf("número %d não é divisivel por 5", num);
	}
	system("pause");
	return 0;
}
