#include <stdio.h>

int main (){
	float preco;
	int quantidade;
	int multiplicacao;
	
	printf ("Qual foi a quatidade do produto? ");
	scanf ("%d", &quantidade );
	
	printf ("Qual foi o preco do produto? ");
	scanf ("%f", &preco);
	
	multiplicacao = preco * quantidade;
	
	printf (" O valor total da compra foi: %d", multiplicacao);
	
	return 0;
		
	
}