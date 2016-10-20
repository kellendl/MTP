#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaTexto();
char * recebeTexto();
void GRavaTexto(char * texto, int tamanho);
char * LeTexto();
int main() {
    char * texto;
    printf("::: Inicio (para sair, tecle #,ENTER) :::::::::::\n");
    texto = LeTexto();
    printf("%s", texto);
    texto = recebeTexto();
    printf("\n::: Na memoria :::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    GRavaTexto(texto, strlen(texto));
    free(texto);
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
char * recebeTexto() {
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
void GRavaTexto(char * texto, int tamanho){
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
 char * LeTexto(){
    FILE * arquivo;
    char * texto = iniciaTexto();
    char * aux;
    int c, tamanho = 0;
    arquivo = fopen ("meutexto. txt", "r");
    do {
        c = fgetc(arquivo);
        if(c != EOF) {
            aux = (char *) realloc(texto, tamanho+2);
            if(aux != NULL) {
                texto = aux;
                texto[tamanho] = c;
                tamanho++;
                texto[tamanho] = '\0';
            }
            else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != EOF);
    fclose(arquivo);
    return texto;
}
