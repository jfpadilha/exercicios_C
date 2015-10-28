/*demonstra como obter ponteiros para elementos dentro de um vetor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tam = 10;
	int *p_i = NULL;                  //boa pratica: inicializar um ponteiro e ja torna-lo nulo
	p_i = malloc(tam * sizeof(int));   //alocar o ponteiro com 40 bytes de tamanho ou seja, 10 posições (0 a 9)

	int i;
	//preencher o vetor com valores
	for (i = 0; i < tam; i++)
	{
		p_i[i] = i + 100;
	}

	int *x = p_i;                    //x ponta para o ponteiro p_i, sempre começa apontando para a posicao 0 (p_i[0])
	printf("X = %d\n", *x);          //vai imprimir o conteúdo da posição p_i[0]

	//no laço abaixo vai imprimir todo o vetor alocado
	printf("Imprimir a partir de outro pointer\n");
	for (i = 0; i < tam; i++)
	{		
		printf("X%d = %d\n", i, *x);
		x++;                         //pode-se fazer isto para mudar a posição em que x está apontando
	}
	printf("Fim do laço\n");

	//posso imprimir diretamente o ponteiro como um vetor qualquer
	printf("Imprimir como qualquer vetor\n");
	printf("X = %d\n", p_i[9]);

	//ou com um laço simples
	printf("Laço simples para vetor\n");
	for (i = 0; i < tam; i++)
	{
		printf("X%d = %d\n", i, p_i[i]);
	}

	free(p_i);                      //boa pratica: se nao vai usar mais o ponteiro então liberar a memoria
	p_i = NULL;                     //boa pratica: nao vai mais usar o ponteiro torne-o nulo

	return 0;
}