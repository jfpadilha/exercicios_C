/*01. Crie um programa que declare um vetor de strings (char *v_s[]) com o 
seguinte conteúdo {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vw", "xyz"}. 
Depois faça um laço que percorre o vetor e imprime cada string na tela. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *v_s[] = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vw", "xyz"};
	//int size = sizeof(v_s) / sizeof(char *); outra opcao obendo o valor tamanho do vetor

	int i = 0;

	for (i = 0; v_s[i] != '\0'; i++)
	{
		printf("%s, ", v_s[i]);
	}
	printf("\n");
	return 0;
}