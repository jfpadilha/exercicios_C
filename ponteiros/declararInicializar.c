/*02. Crie um programa que declare e inicialize três variáveis dos tipos char, double e int. 
Então crie três ponteiros, um para cada tipo. A seguir, inicialize os ponteiros para que 
apontem para as respectivas variáveis. Finalmente, imprima na tela o valor apontado 
por cada ponteiro. */

#include<stdio.h>

int main(void)
{
	//variaveis
	char c = 'x';
	double d = 23.458;
	int j = 34;

	//ponteiros
	char *p_c = NULL;
	int *p_j = NULL;
	double *p_d = NULL;	

	//inicializacao dos ponteiros
	(p_c) = &c;
	(p_d) = &d;
	(p_j) = &j;

	printf("Variável char: %c\n", *p_c);
	printf("Ponteiro: %p\n", p_c);

	printf("Variável: %f\n", *p_d);
	printf("Ponteiro: %p\n", p_d);

	printf("Variável: %d\n", *p_j);
	printf("Ponteiro: %p\n", p_j);





	return 0;
}