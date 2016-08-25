#include<stdio.h>
int main()
{
    int i,B,P,resultado;
    printf("Escreva a base:");
    scanf("%d\n",&B);
    printf("Escreva a potencia:");
    scanf("%d\n",&P);


    for(i=0;i<P;i++)
    {
        resultado=(resultado*P);
    }
    printf("O resultado e: %d\n", resultado);



        return 0;

}
