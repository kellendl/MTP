#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(0));
    int dado1, dado2, dado3,soma;
    dado1=("%d\n", rand()%6+1);
    printf("O numero sorteado do dado 1 e:%d\n", dado1);

    dado2=("%d\n", rand()%6+1);
    printf("O numero sorteado do dado 2 e:%d\n", dado2);

    dado3=("%d\n", rand()%6+1);
    printf("O numero sorteado do dado 3 e:%d\n", dado3);


    soma=(dado1+dado2+dado3);
    printf("Numero da soma:%d\n", soma);

    if(soma==7 || soma==11) printf("O jogador venceu!!!");
    else printf(" O jogador perdeu!!! ");


    return 0;
}
