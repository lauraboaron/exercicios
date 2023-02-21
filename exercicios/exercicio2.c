#include <stdio.h>

int main () {
	char nome[40], nome2[90], nome3[80], nome4[80];
	
	printf ("Digite seu nome: ");
	scanf("%s", &nome);
		
	printf("\nDigite seu endereco: ");
	scanf("%s", &nome2);
		
	printf("\nDigite seu CEP: ");
	scanf("%s", &nome3);
			
	printf("\nDigite seu telefone: ");
	scanf("%s", &nome4);
	
	
	printf ("\nO nome digitado e: %s", nome);
	printf ("\nO endereco digitado e: %s", nome2);
	printf ("\nO CEP digitado e: %s", nome3);
	printf ("\nO telefone digitado e: %s", nome4);
	
	return 0;
	
}
