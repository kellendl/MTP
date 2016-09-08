#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numero1, numero2, soma;
    //unsigned char *p = NULL, *q;

    printf("Digite dois numeros reais:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    printf("%p :  %d\n", &numero1, numero1);
    printf("%p :  %d\n", &numero2, numero2);

    soma= numero1+numero2;


    printf("O endereco do resultado e: %p o conteudo do resultado e : %d\n", &soma, soma);

    return 0;
}
