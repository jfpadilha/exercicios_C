/*Exemplo de aritmética com ponteiros para acesso aos valores de um vetor de char*/

#include <stdio.h>

int main(void)
{
    char s[] = "abcdefghijklmnopqrstuxyzw";
    int i = 0;

    //mais recomendada
    for (i = 0; s[i] != '\0'; i++)
    {
        printf("%c ", s[i]);
    }
    
    printf("\n\n");
    //menos recomendada e mais complicada
    char *p_c = NULL;
    for (p_c = s; (*p_c) != '\0'; p_c++)
    {
        printf("%c ", (*p_c));
    }
    printf("\n\n");
    return 0;
}
