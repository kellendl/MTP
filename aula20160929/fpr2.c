
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void soletras(char *frase, int tamanho, char *nova_frase);

int main() {
	char frase[256], nova_frase[256];
	printf("Entre com uma frase: ");
	gets(frase);
	soletras(frase, strlen(frase), nova_frase);
	printf("%s\n", nova_frase);
	return 0;
}

void soletras(char *frase, int tamanho, char *nova_frase) {
	int i, j = 0;
	for(i = 0; i < tamanho; i++)
		if(isalpha(frase[i])) {
			nova_frase[j] = frase[i];
			j++;
		}
	nova_frase[j] = '\0';
}
