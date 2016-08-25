#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    int numero, numero_sorteado,soma;
    printf("Entre com um numero inteiro nao negativo:");
    scanf("%d",&numero);

    numero_sorteado=("%d\n", rand()%2);
    printf("O numero sorteado e:%d\n", numero_sorteado);


    soma=(numero_sorteado+numero);
    printf("Numero da soma:%d\n", soma);

    if(soma%2==0) printf("A soma deu um numero par");
    else printf(" O numero da soma e impar ");

    return 0;
}
