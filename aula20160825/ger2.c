#include<stdio.h>
#include<time.h>
int main()
{
    srand(time (0));
    int numero, numero_sorteado,i;
    printf("\nEscolha um numero no intervalo de 0 a 100:");
    scanf("%d",&numero);

    numero_sorteado=("%d", rand()%100);
    printf("\nNumero sorteado:%d", numero_sorteado);

    do

    if(0<=numero<100)
    {
        if(numero<numero_sorteado)
    {
        printf("BAIXO!!");
        break;
    }
    else if (numero>numero_sorteado)
    {
        printf("ALTO");
        break;
    }
    else
    {
        printf("ACERTOU!!!");
        break;
    }
    }

    while(numero!=numero_sorteado);
    return 0;
}
