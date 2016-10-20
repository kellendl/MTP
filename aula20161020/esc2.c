#include <stdio.h>
#include <string.h>
#include<time.h>


void gravarDados();


int main () {
    int numeros, i, aleatorio;
    printf(" Digite a quantidade de numeros:");
    fscanf(stdin,"%d", &numeros);

    aleatorio = (int*)(sizeof (numeros));

    for(i=0; i<numeros; i++){
    aleatorio = rand();
    gravarDados(numeros);
    }
    free(aleatorio);

    return 0;
}
void gravarDados(int *numeros){
    FILE * arquivo;
    int aletorio;
    arquivo = fopen("info. txt", "w");
    if (arquivo ==NULL)
        fprintf(stderr,"Erro na gravacao do arquivo!\n");
    else {
    fprintf(arquivo, "%d\n%d\n", &numeros);
    fclose(arquivo);
    }
}
