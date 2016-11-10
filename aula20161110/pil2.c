#include<stdio.h>
#include<stdlib.h>
typedef int Dado; // muda o tipo da pilha aqui

typedef struct Pilha_
{
    Dado topo;
    struct Pilha_*proximo;


}Pilha;

void push(Pilha ** ppilha, Dado elemento);
void pop(Pilha ** ppilha);
Dado top(Pilha *pilha);
int empty(Pilha *pilha);

int main()
{
    int i;
    Pilha * pilha = NULL; //pilha vazia

    // PROGRAMA
    printf("\nPush: ");
    for(i = 0; i < 5; i++)
    {
        push(&pilha,  i ); //testa PUSH
        printf("%d", top(pilha)); // testa TOP
    }
    printf("\nPop: ");
    while(!empty(pilha)){ //testa EMPTY
        printf("%d", top(pilha)); // testa TOP
        pop(&pilha); //testa Top
    }

    return 0;
}

void push(Pilha ** ppilha, Dado elemento)              //Criar nova estrutura com elemento informado
{
    Pilha * novo = (Pilha*) malloc(sizeof(Pilha));   //Nova struct deve apontar o tempo atual
    novo->topo = elemento;                           // Apontar a pilha para o novo topo
    novo->proximo = *ppilha;
    *ppilha = novo;
}

void pop(Pilha ** ppilha)
{
    Pilha * aux = NULL;

    if(!empty(*ppilha))
    {
       aux = (*ppilha) -> proximo;
       free(*ppilha);
       *ppilha = aux;
    }
        else
        fprintf(stdout,"\nWARNING :: PILHA vazia!\n");

}
Dado top(Pilha *pilha)
{
    return pilha->topo;
}
int empty(Pilha *pilha)
{
    return (pilha == NULL);
}

