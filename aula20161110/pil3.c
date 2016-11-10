#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int Dado;//tipo da pilha int
typedef struct Pilha_{
   Dado topo;
   struct Pilha_ * proximo;
}Pilha;
// funcao mudara o dado-> passagem por referencia

void push (Pilha ** ppilha, Dado elemento);
void pop (Pilha ** ppilha);
Dado top (Pilha * ppilha);
int empty(Pilha * pilha);

int main()
{
    int numero,escolha;
    char * texto;
    Pilha * pilha = NULL;
    do {
        printf("Digite os numero inteiros positivos:");
        scanf("%d",&numero);
        if (numero>=0)
        {
             push(&pilha,numero);
        }
    }while(numero>=0);
    printf("\n\n");
    printf("(1) Salvar em arquivo.\n(2)Visualizar na tela.\n");
    scanf("%d",&escolha);
    if (escolha == 1)
    {
        FILE *arquivo;
        arquivo = fopen("sequencia.txt","w");
        if(arquivo == NULL)
            fprintf(stderr, "Erro na criacao do arquivo!\n");
        else {
                while(!empty(pilha))
                {
                    fprintf(arquivo," %d ",top(pilha));
                    pop(&pilha);
                }
            fclose(arquivo);
        }
    }
    else
    {
        printf("Numeros invertidos ");
        while (!empty(pilha))
            {
                printf("%d ",top(pilha));
                pop(&pilha);
                }
        printf("\n\n");
    }

    return 0;
}
void push (Pilha ** ppilha, Dado elemento){
    Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
    novo->topo = elemento;
    novo->proximo = *ppilha;
    *ppilha = novo;
}
void pop (Pilha ** ppilha){
    Pilha * aux = NULL;
    if(!empty(*ppilha))
    {
        aux = (*ppilha)->proximo;
        free(*ppilha);
        *ppilha = aux;
    }
    else {
        fprintf(stdout,"\n ATENCAO!!!Pilha vazia\n");
    }
}
Dado top (Pilha * pilha)
{
     return pilha -> topo;
}
int empty(Pilha * pilha){
    return (pilha == NULL);
    }
