#include<stdio.h>
#include<stdlib.h>

int main()
{
    double numero,i, fatorial;
    printf("Informe um numero: \n");
    scanf("%lf",&numero);
    fatorial = 1;
    for(i=2;i<=numero;i++)
    {
        fatorial = fatorial *i;
    }
    printf("\n O Fatorial de %.2lf e igual a %.2lf \n", numero,fatorial);
    return 0;
}



