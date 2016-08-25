#include<stdio.h>
int main()
{
    float A,B,C, media;
    printf("Entre com a nota A:");
    scanf("%f", &A);
    printf("Entre com a nota B:");
    scanf("%f", &B);
    printf("Entre com a nota C:");
    scanf("%f", &C);


    media = (2*A+3*B+5*C)/(2+3+5);
    printf("A media e: %.1f\n", media);
    return 0;

}
