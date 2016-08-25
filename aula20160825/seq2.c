#include<stdio.h>
int main()
{
    float base_triangulo, altura_triangulo, area_triangulo;
    printf("Entre com a base do triangulo:");
    scanf("%f", &base_triangulo);
    printf("Entre com a altura do triangulo:");
    scanf("%f", &altura_triangulo);

    area_triangulo = ((base_triangulo*altura_triangulo)/2);
    printf("A area do triangulo e: %.4f\n", area_triangulo);
    return 0;
}
