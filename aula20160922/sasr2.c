#include <stdio.h>

void impar(impar);
void par(par);

int main()
{
        int numero;

        do
        {
        printf("Deseja ver quais sequencias, se impar digite 1, se par digite 2 e para sair 0: ");
        scanf("%d", &numero);

        if (numero==1){
            impar();
            break;
        }


        else if (numero==2){
            par();
            break;
        }


        }while(numero!=0);
        return 0;
}

void impar()
{
    printf("1, 3, 5, 7, 9\n");
}
void par()
{
    printf("2, 4, 6, 8, 10\n");
}






