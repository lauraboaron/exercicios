#include <stdio.h>

int main () {
	char nome[40];
	
	printf ("Qual o seu nome? ");
	fgets(nome, 40, stdin);
	printf ("Oi, %s", nome);
	
	return 0;
	
}