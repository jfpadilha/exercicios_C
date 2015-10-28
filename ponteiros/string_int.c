/* Crie uma função string_length() que recebe uma string como parâmetro e
   devolve um inteiro. Você deve implementar essa função sem utilizar 
   chamadas da biblioteca. Além disso, use incremento do ponteiro através
   do operador '++'. */

   #include <stdio.h>
   #include <stdlib.h>

   int string_length(char *v_s)
   {

		int n, i = 0;		

		while(v_s[i] != '\0')
		{
			i++;
			n++;
		}

   		return n;
   }

   int main(void)
   {
		char s[] = "bla bla bla";
		char *p_s = s;

		printf("%d\n", string_length(s));
		printf("%d\n", string_length(&s));
		printf("%d\n", string_length(p_s));
		return 0;
   }

