#include<stdio.h>
int main()
{
    int i,B,P,resultado=1;
    printf("Escreva a base:");
    scanf("%d",&B);
    printf("Escreva a potencia:");
    scanf("%d",&P);


    for(i=0;i<P;i++)
    {
        resultado=(resultado*B);
    }
    printf("O resultado e: %d\n", resultado);



        return 0;

}
