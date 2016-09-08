#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int vet[10], soma=0, produto=1, i;
    printf("\n Escreva 10 numeros: \n");
    for(i=0;i<10;i++)
        {
            scanf("%d",&vet[i]);
        }

    for (i=0;i<10;i++)
    {
        soma = soma + vet[i];
    }
     for (i=0;i<10;i++)
    {
        produto = produto * vet[i];
    }

    printf("\n Soma: %d", soma);
    printf("\n Produto: %d", produto);
    return 0;
}
