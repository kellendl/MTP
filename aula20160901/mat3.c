#include <stdio.h>
#include <math.h>
 int main()
 {
     double numero, base, logaritimo=0;

     printf(" Entre com o numero:");
     scanf("%lf", &numero);
     printf(" Entre com a base do logaritimo:");
     scanf("%lf", &base);


     logaritimo =  log(numero)/log(base);

     printf("Resultado do logaritimo: %.2f\n", logaritimo);
     return 0;

 }
