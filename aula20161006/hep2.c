#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void recebeMatriz( float ** matriz, int qtde);
float Matriz(float ** matriz, int qtde);
void imprimematriz(float **matriz);

int main()
{
int linhas, colunas;
float ** matriz;
printf("Entre com o numero de linhas da matriz: ");
scanf("%d", &linhas);
printf("Entre com o numero de colunas: ");
scanf("%d", &colunas);

matriz = (float **) calloc(linhas, sizeof(float*));

for(j=0; j<=linhas; j++)
matriz[j]=(float*) calloc(colunas, sizeof(float));

recebeMatriz(matriz, qtde);
printf("
free(matriz);
return 0;
}

void recebeMatriz( float **matriz, int qtde)
{
    for(i=0; i<qtde; i++)
        for (j=0; j<M; j++)
    {
        printf("Entre com elemento (d%, d%):", i, j);
        scanf("%f", &(matriz[i][j]));
    }



int i;
for( i = 0; i < qtde; i++)
{
printf("Entre com o elemento %d: ", i+1);
scanf("%f", &vetor[i]);
}
}

float media(float * vetor, int qtde)
{
float soma = 0;
int i;
for( i = 0; i < qtde; i++)
soma += vetor[i];
return soma/qtde;
}

float desviopadrao(float * vetor, int qtde)
{
float soma = 0;
float m = media(vetor,qtde);
int i;
for( i = 0; i < qtde; i++)
soma += pow((vetor[i] - m), 2);
return sqrt(soma/(qtde -1));
}

