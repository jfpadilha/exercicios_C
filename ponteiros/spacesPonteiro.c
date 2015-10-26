/*04. Copie todo o programa anterior, mas altere apenas o tipo do parâmetro da
função spaces(), que deve ser agora um ponteiro para caracter, ou seja,
char *p_c. É necessário modificar mais alguma coisa nesta função para que ela
funcione como anteriormente? Nota: não altere a função main(). */

#include<stdio.h>

int spaces(char *p_c)
{
	int tam, i, count = 0;
	tam = strlen(p_c) -1;

	for(i = 0; i < tam; i++)
	{
		if(isspace(p_c[i]))
		{
			count++;
		}
	}
	return count;
}

int main(void)
{
	int tam = 100;
	char word[tam];

	printf("Enter a String: ");
	fgets(word, tam, stdin);

	printf("%d\n", spaces(word));
	return 0;
}