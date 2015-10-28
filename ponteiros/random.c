/*Exemplo de numero randômico
demonstra a criação de 10 numero aleatórios no intervalo de 0 a 99*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int tam = 10;
	int i, r = 0;

	//vai gerar numeros aleatórios de 0 a 20
	for (i = 0; i < tam; i++)
	{
		r = rand() % 20;
		printf("%d - ", r);
	}
	printf("\n");

	//vai gerar numeros
	for (i = 0; i < tam; i++)
	{
		r = rand() % 30 + 15;
		printf("%d - ", r);
	}
	printf("\n");

	return 0;
}