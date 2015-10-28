/* Crie uma função chamada product() que calcula o produto de valores do tipo double. 
 Essa função recebe como parâmetro um ponteiro para double(ou seja, double *p_d) e um número
  inteiro n. Esta função deve retornar o resultado da multiplicação de todos os n
   números apontados por p_d. Teste criando o seguinte vetor de doubles {1.2, 3.4, 5.6, 7.8, 9.0} e 
   calcule o produto dos quatro primeiros números e também o produto dos últimos três. */

   #include <stdio.h>
   #include <stdlib.h>

   double produtc(double *p_d, int n)
   {
   		int r = p_d[0];
   		int i = 0;

	   	for (i = 0; i < n; i++)
	   	{
	   		r = r * p_d[i];
	   	}

   		return r;
   }

   int main(void)
   {
		double vet[] = {1.2, 3.4, 5.6, 7.8, 9.0};
		double *p_d = vet;

		printf("Primeiros 4: %g\n", produtc(p_d, 4));
		printf("Últimos 3: %g\n", produtc(&p_d[2], 3)); //começa a calcular a partir da posicao 2
		return 0;
   }