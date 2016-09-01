#include<stdio.h>
#include<complex.h>
int main()
{
    double complex C1,C2, soma, prod;
    double preal, pimag;
    printf("Entre com a parte real de C1:");
    scanf("%lf", &preal);

    printf("Entre com a parte imaginaria de C1:");
    scanf("%lf", &pimag);

    C1= preal + pimag * I;

    printf("Entre com a parte real de C2:");
    scanf("%lf", &preal);

    printf("Entre com a parte imaginaria de C2:");
    scanf("%lf", &pimag);

    C2= preal + pimag + I;

    soma= C1+ C2;
    prod= C1*C2;

     printf("%lf + %lf i\n",creal(soma),cimag(soma));
     printf("%lf + %lf rad\n",creal(soma),cimag(soma));
     printf("%lf + %lf i\n",creal(prod),cimag(prod));
     printf("%lf + %lf rad\n",creal(prod),cimag(prod));

   return 0;

}
