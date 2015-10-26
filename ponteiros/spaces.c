/*03. Crie uma função spaces() que recebe um vetor de caracteres como uma string.
Essa função deve contar o número de ocorrências de caracteres de espaço
(usando a função adequada do include ctype) e retornar um valor inteiro com a
contagem feita. Teste esta função a partir da função main(). */

#include<stdio.h>

int spaces(char vet[])
{
	int i, count, tam = 0;
	tam = strlen(vet) -1;
	
	for(i = 0; i < tam; i++)
	{
		if(isspace(vet[i]))
		{
			count++;
		}
	}
	return count;
}

int main(void)
{
	//char vet[] = "teste de texto";
	int tam = 100;

	char word[tam];
	printf("Informe uma string string: ");
	fgets(word, tam, stdin);

	
	printf("%d\n", spaces(word));

	return 0;
}