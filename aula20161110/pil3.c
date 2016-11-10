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
    int numero, i;
    Pilha pilha;
    pilha.idtopo = -1;// Pilha vazia
    // PROGRAMA

    do
    {
        printf("\nEscreva a sequencia de numeros positivos: ");
        scanf("%d", &numero);

        if(numero>=0)

        push(&pilha, numero); //testa PUSH
        //printf("%d", top(pilha)); // testa TOP
    }while(!numero <= 0);

    printf("\nPop: ");
    while(!empty(pilha)){ //testa EMPTY
        printf("%d ", top(pilha)); // testa TOP
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
