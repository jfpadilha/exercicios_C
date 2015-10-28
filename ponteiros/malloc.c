/*Demonstra uma alocação dinâmica simples de vetor*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tam = 10;
	int i = 0;
	int *p_i = malloc(tam * sizeof(int));      //definir um espaço dinamicamente alocado na memória do tamanho de 40 bytes (10 * 4)

	p_i[7] = 123;

	printf("%d\n", p_i[7]);	

	return 0;
}