#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void recebe(char tipo, void * endereco);
void recebeSTR(char * endereco, int n);
int main ()
{
int i; float f; char c; char s [256];
printf("Entre com um inteiro:");   recebe('i', &i);
printf("Entre com um float:");     recebe('f', &f);
printf("Entre com um caractere:"); recebe('c', &c);
printf ("Entre com uma frase:");     recebeSTR(s,sizeof(s));
printf("Para %d, o quadrado: %d\n", i, i*i);
printf("Para %f, o raiz: %f\n", f, sqrt(f));
printf("Para %c, o caractere: %c\n", c, (islower (c))? toupper(c): tolower (c));
printf ("A frase '%s' tem %d caracteres\n", s, strlen (s));
return 0;
}

void recebe(char tipo, void *endereco) {
int c;
switch(tipo) {
case 'i': scanf ("%d", (int*) endereco); break;
case 'f': scanf ("%f", (float*) endereco); break;
case 'd': scanf ("%lf", (double*) endereco); break;
   case 'c': scanf ("%c", (char*) endereco); break;
}
while ((c=getchar()) != EOF && c !='\n');
}

void recebeSTR(char *endereco, int n ){
fgets(endereco, n, stdin);
if(endereco[strlen(endereco)-1]==10)
endereco[strlen(endereco)-1]='\0';
}
