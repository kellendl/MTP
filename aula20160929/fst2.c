#include <stdio.h>

struct numero {
int numerador;
int denominador;
};

struct numero soma(int numerador1, int numerador2, int denominador1, int denominador2);

int main() {
struct numero resposta;
int num1, den1, num2, den2 ;
printf("Entre com a primeira fracao\n");
	printf("Entre com o numerador: ");
	scanf("%d", &num1);
	printf("Entre com o denominador: ");
	scanf("%d", &den1);

	printf("\nEntre com a segunda fracao\n");
	printf("Entre com o numerador: ");
	scanf("%d", &num2);
	printf("Entre com o denominador: ");
	scanf("%d", &den2);

resposta = soma (num1,num2,den1,den2);
printf("Soma: %d/%d \n", resposta.numerador, resposta.denominador);
return 0;
}

struct numero soma(int numerador1, int numerador2, int denominador1, int denominador2) {
struct numero resposta;
resposta.numerador = (numerador1*denominador2)+(numerador2*denominador1);
resposta.denominador = denominador1*denominador2;
return resposta;
}
