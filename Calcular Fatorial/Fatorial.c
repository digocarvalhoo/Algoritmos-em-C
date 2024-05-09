
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");

	int num, i, fat;

	printf("Informe o número:\n");
	scanf("%d", &num);

	fat = 1;

	for (i = 1; i <= num; i++)
		fat = fat * i;

	printf("O fatorial é: %d\n", fat);
	return (0);
}