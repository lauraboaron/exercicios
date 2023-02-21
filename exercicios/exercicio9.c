#include <stdio.h>
#include <math.h>

int main (){
	int raio;
	int multiplicacao;
	
	printf ("Qual e o raio de circulo? ");
	scanf ("%d", &raio);
	
	multiplicacao = raio * raio * 3.14;
	
	printf ("\nA area e: %.2d", multiplicacao);
	
	multiplicacao = 2 * 3.14 * raio;
	
	printf ("\nO perimetro e: %.2d", multiplicacao);
	
	return 0;
	

	
	
}