#include<stdio.h>
#include<time.h>
int main()
{
    srand (time (0));
    int numero,numero_sorteado,i=0;

    numero_sorteado = ("%d", rand()%100);


    do
    {
        printf("\n Informe um numero de 0 a 99 \n");
        scanf("%d",&numero);

        if(0<=numero<100)
            {
                if (numero<numero_sorteado)
                {
                    printf("\n BAIXO! \n");
                    i++;
                }
                else
                    if (numero>numero_sorteado)
                    {
                        printf("\n ALTO! \n");
                        i++;
                    }
                    else
                        {
                            printf("\n ACERTOU! \n");
                            break;
                        }
            }
    } while (numero!=numero_sorteado);

    printf("\n Numero de tentativas %d\n",i+1);
    return 0;
}
