#include<stdio.h>
int main()
{
    int m, soma=0, aux=1;
    printf(" Digite um numero:");
    scanf("%d", & m);
    while (aux<m)
        {
            if (m % aux == 0)
            {
                soma = soma+aux;
            }
            aux=aux+1;
        }
        if (soma == m)
        {
            printf("O valor %d e um numero perfeito.\n", m);
        }
        else
            {
                printf("O valor %d nao e um numero perfeito.\n", m);
            }
            return 0;
}
