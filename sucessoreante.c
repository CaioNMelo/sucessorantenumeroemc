#include <stdlib.h>
#include <stdio.h>

int numero;

int main()
{
	printf("Digite um n�mero");
	scanf("%d" , &numero);
	
	int sucessor = numero + 1;
	int antecessor = numero - 1;
	
	printf("O sucessor �:  %d\n" , sucessor);
	printf("O antercessor �:  %d\n" , antecessor);
}