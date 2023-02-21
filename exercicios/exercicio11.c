#include <stdio.h>

int main (){
	char nome[40], salario [40], nascimento [40];
	
	printf ("Qual o seu nome? ");
	scanf ("%s", &nome);
	
	printf ("Qual seu salario? ");
	scanf ("%s", &salario);
	
	printf ("Qual sua data de nascimento? ");
	scanf ("%s", &nascimento);
	
	printf ("Os dados digitados foram: ");
	printf ("\nNome: %s", &nome);
	printf ("\nSalario: %s", &salario);
	printf ("\nNascimento: %s", &nascimento);
	
	
	return 0;
	
	
}