/*01. Faça um programa que imprima o tamanho de diversas variáveis do tipo
ponteiro (ponteiro para caracter, ponteiro para inteiro e ponteiro para double),
utilizando o operador sizeof().*/

#include<stdio.h>

void impressInt(int *p_i)
{
	int size = sizeof(p_i);
	printf("Int: %d\n", size);
}

void impressDouble(double *p_d)
{
	int size = sizeof(p_d);
	printf("Double: %d\n", size);
}

void impressChar(char *p_c)
{
	int size = sizeof(p_c);
	printf("Char: %d\n", size);
}

int main(void)
{
	char c = 'x';
	int i = 9;
	double d = 33.45;

	int *p_i = &i;
	double *p_d = &d;
	char *p_c = &c;

	impressInt(p_i);
	impressDouble(p_d);
	impressChar(p_c);

	return 0;
}