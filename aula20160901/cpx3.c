#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
int main ()
{
    double complex c,raiz, Prodconjugado;
    double preal, pimag;
    printf("\n Informe a parte real de C \n");
    scanf("%lf",&preal);
    printf("\n Informe a parte imaginaria de C \n");
    scanf("%lf",&pimag);
    c = preal + pimag * I;

    raiz = csqrt(c);

    printf ("\n Valor complexo da raiz = %lf \n", raiz);

    return 0;
}
