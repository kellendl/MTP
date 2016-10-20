#include <stdio.h>
#include <string.h>
#include<time.h>


void gravarDados();


int main () {
    int numeros, i=0;
    int *aleatorio;
    printf(" Digite a quantidade de numeros:");
    fscanf(stdin,"%d", &numeros);

    aleatorio = (int*)malloc(numeros*sizeof (int));

    for(i=0; i<numeros; i++){
        aleatorio[i] = rand();
       gravarDados(aleatorio[i]);
    }
    free(aleatorio);

    return 0;
}
void gravarDados(int numeros){
    FILE * arquivo;
    int aletorio;
    arquivo = fopen("info.txt", "a");
    if (arquivo ==NULL)
        fprintf(stderr,"Erro na gravacao do arquivo!\n");
    else {
        fprintf(arquivo, "%d\n", numeros);
        fclose(arquivo);
    }
}
