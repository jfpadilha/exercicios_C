/*05. Faça um programa que percorra o seguinte vetor de strings, e que imprima a string mais longa:

char *vs[] = {"jfd", "kj", "usjkfhcs", "nbxh", "yt", "muoi", "x", "rexhd"}; */

#include<stdio.h>

int main(void)
{
	char *vs[] = {"jfd", "kj", "usjkfhcs", "nbxh", "yt", "muoi", "x", "rexhd"};
	int i, max, indice = 0;
	int tam = sizeof(vs) / sizeof(char *); //obtem o tamanho do vetor vs

	//imprime toda a string
	for (i = 0; i < tam; i++)
	{
		printf("%s ", vs[i]);
	}

	printf("\n");
	max = vs[0]; //setar a primeira posicao como sendo a maior
	
	for (i = 0; i < tam; i++)
	{
		t_s = strlen(vs[i]);
		if (t_s > max)
		{
			max = t_s;
			indice = i;
		}
		
	}

	printf("Maior: %d\n", max);
	printf("String: %s ", vs[indice]);

	return 0;
}