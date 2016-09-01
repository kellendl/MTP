#include <stdio.h>
#include <math.h>
 int main()
 {
     double lado1, lado2,angulo, lado3;
     printf(" Entre com o primeiro lado do triangulo:");
     scanf("%lf", &lado1);
     printf(" Entre com o segundo lado do triangulo:");
     scanf("%lf", &lado2);
     printf(" Entre com o angulo:");
     scanf("%lf", &angulo);

     lado3 = sqrt(pow (lado1,2.) + pow(lado2,2.)- 2*(lado1)*(lado2)* cos (angulo));
     printf("Lado 3: %lf\n", lado3);
     return 0;

 }
