#include<stdio.h>
#define QTMAX 1000

#define RECEBECADASTRO(c, CAD) \
({ printf ("Digite o nome %s: ", c);\
scanf ("%f", &CAD.nome); \
printf ("Digite a idade %s: ", c);\
scanf ("%f", &CAD.idade); \
printf ("Entre com o telefone %s: ", c);\
scanf ("%f", &CAD.telefone); })

#define MOSTRAPONTO(ponto) \
({ printf ("( %g; %g; %g)\n", CAD.idade, CAD.endereco , CAD.idade); })

struct CAD {
    int nome;
    int idade;
    int telefone;
}

int main() {
    int opc, i, quantidade = 0;
    struct CAD cadastro[QTMAX], nome;
    float idade, telefone;
    while(1) {
        printf("1 - cadastra, 2 - sair;")
        scanf("%d", &opc);
        if(opc == 2) break;
        cadastro[quantidade].idade = 3
        quantidade++;
       }
       for(i = 0; i< quantidade; i++);
            mostra(cadastro[i]);
       return 0;
}

