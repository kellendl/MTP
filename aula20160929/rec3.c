#include <stdio.h>

int fatorial (int v);
int main()
{
    int c1, c2, c3, n, k, tripascal;
    pritf("\n Triangulo de Pascal!!!\n");
    printf("\n Numero de linhas: ");
    scanf("%d",&n);
    printf("\n Numero de colunas: ");
    scanf("%d",&k);
    c1 = fatorial (n);
    c2 = fatorial (k);
    c3 = fatorial ((n-k));

    tripascal = c1 / (c2 * c3);

    printf("\t Resultado: %d", tripascal);
    printf("\n\n");
    return 0;

}

int fatorial (int v)
{

    int fatorial = 1, i;
    for(i=2;i<=v;i++)
    {
        fatorial = fatorial *i;
    }

    return fatorial;
}
