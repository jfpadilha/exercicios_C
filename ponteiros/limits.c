/*06. Escreva uma função chamada limits(), que recebe quatro parâmetros: um vetor de inteiros, o tamanho deste 
vetor, um ponteiro p_min para inteiro e um ponteiro p_max para inteiro. Essa função retorna void, e deve 
encontrar o menor e o maior elemento do vetor passado, e armazená-los em p_min e p_max, respectivamente.
 Teste esta função chamando ela a partir de main(). */

void limits(int v[], int t_v, int *p_min, int *p_max)
{
	int i, min, max = 0;

	(*p_min) = v[0];
	(*p_max) = v[0];
	
	for (i = 0; i < t_v; i++)
	{
		if(v[i] > (*p_max))
		{
			(*p_max) = v[i];
		}

		if (v[i] < (*p_min))
		{
			(*p_min) = v[i];
		}
	}
}

int main(void)
{
	int v[] = {2, 4, 66, 87, 22, 44, 65, 32, 76, 64, 71};
	int t_v = sizeof(v) / sizeof(int);

	int max, min = 0;
	
	limits(v, t_v, &min, &max);

	printf("Tam: %d\n", t_v);
	printf("Ponteiro Max: %d\n", max);
	printf("Ponteiro Min: %d\n", min);

	return 0;
}