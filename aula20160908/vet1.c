#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
int main()
{
    srand(time(0));
    unsigned int numero;
    float aleatorios[N];
    float soma = 0.0f, media;
    int i;
    printf("Entre com um numero inteiro nao negativo:");
    scanf("%u", &numero);
    for(i = 0; i< N; i++) aleatorios[i] = rand()%numero + 1;
    for(i = 0; i< N; i++) soma = soma + aleatorios[i];
    media = soma/N;
    printf("Media: %f\n", media);
    return 0;
}
