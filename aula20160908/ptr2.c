#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vetor[] = {0,1,2,4,8};
    int contagem = 0;
    //int tam = sizeof (vetor) / sizeof (int);
    unsigned char *p = NULL, *q; // inicializar ponteiro
    p = q = (unsigned char*) &vetor;
    for(; p< q + sizeof(vetor); p++)
    {
        if(*p == 0x0) contagem++;
        printf("%p : %d\n", p, *p);
    }
    printf("Bytes apenas com 0's: %d\n", contagem);
    return 0;
}
