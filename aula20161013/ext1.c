#include <stdio.h>
#include <stdlib.h>
float * recebe_Numero(float * vetor, int * ptamanho);
float media(float * vetor, int tamanho);
float Maior(float *vetor, int tamanho);
float Menor(float *vetor, int tamanho);

int main() {
    float * vetor = NULL;
    int tamanho = 0, opc, i;
    do {
        vetor = recebe_Numero(vetor, &tamanho);
        printf("Media: %g\n", media(vetor,tamanho));
        printf("Maior: %g\n", Maior(vetor,tamanho));
        printf("Menor: %g\n", Menor(vetor, tamanho));

        printf("Deseja entrar com outro? (0 - nao; 1 - sim): ");
        scanf("%d", &opc);
    } while(opc != 0);
    printf("\n Valores informados: \n");
    for(i = 0 ; i < tamanho; i++) printf("%2.f\n", vetor[i]);
    free(vetor);
    return 0;
}
float * recebe_Numero(float * vetor, int * ptamanho) {
    (*ptamanho)++;
    if(vetor == NULL)
        vetor = (float *) malloc(sizeof(float));
    else
        vetor = (float *) realloc(vetor, (*ptamanho)*sizeof(float));
    printf("Entre com um numero: ");

    scanf("%f", &vetor[(*ptamanho)-1]);
    return vetor;
}
float media(float * vetor, int tamanho) {
    float soma = 0.f;
    int i;
    for(i = 0 ; i < tamanho; i++)
        soma = soma + vetor[i];
    return soma/tamanho;
}
float Maior(float *vetor, int tamanho)
{
    int i;
    float maior = vetor[0];

    for(i = 0; i<tamanho; i ++)

    if (vetor[i] > tamanho)
        maior = vetor[i];

    return maior;
}
float Menor(float *vetor, int tamanho)
{

    int i;
    float menor;
    menor = vetor[0];
    for (i=0; i<tamanho; i++)
    {
        if (vetor[i] < menor )

        menor = vetor[i];
    }
return menor;
}




