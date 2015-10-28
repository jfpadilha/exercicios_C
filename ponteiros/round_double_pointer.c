/*07. Escreva uma função chamada round_double_pointer(), que recebe um ponteiro
para double e altera o valor apontado. Essa função deve arredondar um valor
fracionário para o inteiro mais próximo. Por exemplo, 2.3 é arredondado para
2.0, 3.7 é arredondado para 4.0, e 6.5 é arredondado para 7.0. Teste a função
chamando esta a partir de main(), para os valores citados. Dica: utilize a função
floor() da biblioteca matemática. */

#include <stdio.h>
#include <math.h>

void round_double_pointer(double *p_d)
{
	double d = *(p_d);
	double f = floor(d);

	if (d - f >= 0.5)
	{
		//arredondar para cima
		d = f + 1;
	}
	else
	{
		//arredondar para baixo
		d = f;
	}

	*(p_d) = d;
}

int main(void)
{
	double value = 3.7;	
	round_double_pointer(&value);	
	printf("%.lf\n", value);
	return 0;
}