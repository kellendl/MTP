#include<stdio.h>
#define MAXPILHA 10 // tamanho maximo da pilha
typedef char Dado; // muda o tipo da pilha aqui
typedef struct Pilha_
{
    int idtopo;
    Dado dados[MAXPILHA];

}Pilha;

void push(Pilha * ppilha, Dado elemento);
void pop(Pilha * ppilha);
Dado top(Pilha pilha);
int empty(Pilha pilha);

int main()
{
    int i;
    Pilha pilha;
    pilha.idtopo = -1;// Pilha vazia
    // PROGRAMA
    printf("\nPush: ");
    for(i = 0; i < 5; i++)
    {
        push(&pilha, 'A' + i ); //testa PUSH
        printf("%c", top(pilha)); // testa TOP
    }
    printf("\nPop: ");
    while(!empty(pilha)){ //testa EMPTY
        printf("%c", top(pilha)); // testa TOP
        pop(&pilha);
    }
    printf("\nEstouro?: ");
    for(i=0; i < MAXPILHA; i++) {//TESTE ESTOURO DE PILHA
            push(&pilha, 'A' + i);
            printf("%c", top (pilha)); //testa TOP
    }


    return 0;
}

void push(Pilha * ppilha, Dado elemento)
{
    if(ppilha->idtopo + 1 < MAXPILHA)
    {
        ppilha-> idtopo++;
        ppilha->dados[ppilha->idtopo] = elemento;

    }
    else
        fprintf(stderr,"\nERRO :: ESTOURO DE PILHA!\n");
}


void pop(Pilha * ppilha)
{
    if(ppilha->idtopo >= 0)
    {
        ppilha-> dados[ppilha->idtopo] = 0x0; // opcional,  "limpa" elemento
        ppilha-> idtopo--;
    }
        else
        fprintf(stdout,"\nWARNING :: PILHA vazia!\n");

}
Dado top(Pilha pilha)
{
    return pilha.dados[pilha.idtopo];
}
int empty(Pilha pilha)
{
    return (pilha.idtopo == -1);
}
