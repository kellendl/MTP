#include<stdio.h>
#define MAXPILHA 1024 // tamanho maximo da pilha
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

    unsigned int  numero, AUX, BIT;
    Pilha pilha;
    pilha.idtopo = -1;// Pilha vazia
    // PROGRAMA
    printf("Escreva um numero inteiro:");
    scanf("%d", numero);

    printf("\nPush: ");

    {
        AUX = numero;
    if(AUX > 0)
    BIT = AUX % 2;
    //armazena o BIT (o laço vai do *menos* para o *mais* significativo)
    AUX = AUX/2;


        push(&pilha, AUX ); //testa PUSH
        printf("%f", top(pilha)); // testa TOP
    }
    printf("\nPop: ");
    while(!empty(pilha)){ //testa EMPTY
        printf("%f", top(pilha)); // testa TOP
        pop(&pilha);
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
