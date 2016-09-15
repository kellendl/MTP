#include<stdio.h>

typedef
enum batatinha { janeiro=1, fevereiro = 2, marco = 3, abril = 4, maio = 5, junho = 6, julho = 7,
agosto = 8, setembro = 9, outubro = 10, novembro = 11, dezembro = 12}batatinha;

int main(){
    batatinha xxx;
    printf("Digite o numero do mes:");
    scanf("%d", &xxx);

switch (xxx)
    {
 case janeiro:
     printf ("janeiro\n");
     break;
 case fevereiro:
     printf ("fevereiro\n");
     break;
 case marco:
     printf ("marco\n");
     break;
 case abril:
     printf("abril\n");
     break;
 case maio:
      printf ("maio\n");
      break;
 case junho:
     printf ("junho\n");
     break;
 case julho:
     printf ("julho\n");
     break;
 case agosto:
      printf ("agosto\n");
      break;
 case setembro:
      printf ("semtembro\n");
      break;
 case outubro:
     printf ("outubro\n");
     break;
 case novembro:
     printf ("novembro\n");
     break;
 case dezembro:
     printf ("dezembro");
     break;
    }
 return 0;
}

