#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
char * receberTexto();
void GravaTexto(char * texto, int tamanho);
int main() {
    char * texto;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = receberTexto();
    printf("\n::: Na memoria :::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    GravaTexto(texto, strlen(texto));
    free(texto);
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * receberTexto() {
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
    return texto;
}
void GravaTexto(char * texto, int tamanho){
    FILE * arquivo;
    int i;
    arquivo = fopen("meutexto. txt", "a");
    if (arquivo ==NULL)
        fprintf(stderr,"Erro na gravacao do arquivo!\n");
        else {
          for (i = 0; i < tamanho; i++)
                fputc(texto[i], arquivo);
          fclose(arquivo);
    }
}

