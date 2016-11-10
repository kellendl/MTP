#include <stdio.h>
#include <stdlib.h>

typedef int Dado;

typedef struct Pilha_{
Dado topo;
struct Pilha_ * prox;
}Pilha;

void push(Pilha ** ppilha, Dado elemento);
void pop(Pilha ** ppilha);
Dado top(Pilha * pilha);
int empty (Pilha * pilha);
int main (){
    int i;
    int aux;
    int bit;
    int num;
    Pilha * pilha = NULL;
    //programa

    printf("insira um numero:\n ");
    scanf("%d", &num);

    aux=num;
    while(aux>0)
    {
    bit=aux%2;
    push(&pilha, bit);
    aux=aux/2;
    }

     printf("Numeros:");
     while(!empty(pilha)) {
        printf("%d", top(pilha));
        pop(&pilha);
        }
return 0;
}
void push(Pilha ** ppilha, Dado elemento){
    Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
    novo->topo = elemento;
    novo->prox = *ppilha;
    *ppilha = novo;
}
void pop(Pilha ** ppilha){
    Pilha * aux = NULL;
if(!empty(*ppilha)){
        aux = (*ppilha)->prox;
         free(*ppilha);
         *ppilha = aux;

        }
     else
        fprintf(stdout, "\nWARNING :: pilha vazia");
}

Dado top(Pilha * pilha){
    return pilha->topo;
}
int empty (Pilha * pilha) {
   return (pilha == NULL);
}
