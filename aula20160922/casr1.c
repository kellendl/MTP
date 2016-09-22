#include<stdio.h>
#include <stdlib.h>//rand()
#include <time.h>

void mensagem();

int main()
{
    int numero, numero_sorteado;

    do{

    numero_sorteado=rand()%10 + 1;
    printf("Entre com um numero entre 1 e 10:");
    scanf("%d", &numero);

    if(numero_sorteado == numero)
    mensagem();

    } while( numero!=numero_sorteado);
    return 0;

}

void mensagem()
{
    printf("\nParabens!!");
}
