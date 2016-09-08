#include<stdlib.h>


int main()


{

    int i, v[10], v_aux;
    for (i = 0; i < 10; i++)
    {
    printf("Informe o valor dos Vetores[%d]: ", i+1);
    scanf("%d", &v[i]);
    }
    printf("Vetor:");
    for (i = 0; i < 10; i++)
     printf(" %d ", v[i]);
    v_aux = v[0];
    for (i = 0; i < 10; i++)
    {
     if (i != 9)
         v[i] = v[9 - i];
     else
            v[i] = v_aux;
    }
    printf("\nVetor Invertido:");
    for (i = 0; i < 10; i++)
    printf(" %d ", v[i]);
    getche();

}
