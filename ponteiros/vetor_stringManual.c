/*02. Com base no programa anterior, crie agora um vetor de strings de 9 posições (char *v_s[9]),
 e atribua manualmente a cada elemento as strings "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vw", "xyz". 
 O laço que percorre o vetor e imprime as strings precisa ser modificado para funcionar?*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(void)
 {
	//char *v_s[] = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vw", "xyz"};
	int tam = 9;
	char *v_s[tam];
	char word[9];
	int i = 0;
	//int size = sizeof(v_s) / sizeof(char *); outra opcao obendo o valor tamanho do vetor
	// char *v_s[9];
	// v_s[0] = "abc";
	// v_s[1] = "def";
	// v_s[2] = "ghi";
	// v_s[3] = "jkl";
	// v_s[4] = "mno";
	// v_s[5] = "pqr";
	// v_s[6] = "stu";
	// v_s[7] = "vw";
	// v_s[8] = "xyz";

	for (i = 0; i < tam; i++)
	{
	printf("Enter a string (%d): ", i);
	fgets(word, 10, stdin);
	v_s[i] = word;

	printf("%s\n", v_s[i]);
	}

	for (i = 0; v_s[i] != '\0'; i++)
	{
	printf("%s\n", v_s[i]);
	}

	return 0;
 }