#include <stdio.h>
#define N 2
#define M 4
void imprimematriz(float matriz[N][M]);

int main() {
    float matriz[N][M];

    int i, j;
    for(i=0; i<N; i++)
        for (j=0; j<M; j++)
    {
        printf("Entre com elemento (d%, d%):", i, j);
        scanf("%f", &(matriz[i][j]));
    }

    imprimematriz(matriz);
    printf("\nA transposta e: \n");
    imprimetransposta(matriz);
    return 0;
}
void imprimematriz(float matriz[N][M]) {
    int i, j;
    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
                printf("%g%c", matriz[i][j], (j==M-1)? '\n' : '\t');

}
void imprimetransposta(float matriz[N][M]) {
    int i, j;
    for(j = 0; j < M; j++)
        for(i = 0; i < N; i++)
                printf("%g%c", matriz[i][j], (i==N-1)? '\n' : '\t');
}
