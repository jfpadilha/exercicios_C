/*demonstra como alocar dinamicamente e retornar vetores
nesse exemplo será gerado um vetor com o tamanho N que for passado*/

#include <stdio.h>
#include <stdlib.h>

double *dynamic_array(int n)
{
	double *(p_d) = NULL;               //boa prática: ao declarar um ponteiro torne-o nulo, evitando que lixo esteja dentro dele
	p_d = malloc(n * sizeof(double));	//alocar bytes de memoria do tamanho conforme o calculo de (n * sizeOf de double)
										//sizeOf diz o numero de bytes ocupados pela variavel que recebe
	int i;

	//preencher o vetor com valores inteiros
	for (i = 0; i < n; i++)
	{
		p_d[i] = i + 100;
	}
	return p_d;
}

int main(void)
{
	double *p_x = NULL; //boa prática: sempre que declarar ponteiro já inicializar como null
	int n = 10;			//tamanho do vetor a ser gerado

	p_x = dynamic_array(n);

	int i;
	//imprimir os vetores gerados
	for (i = 0; i < n; ++i)
	{
		printf("p_x[%d] = %g \n", i, p_x[i]);
	}

	free(p_x); //liberar a memoria usada por este ponteiro
	p_x = NULL; //boa pratica: se não for usar mais o ponteiro devem torna-lo nulo

	return 0;
}