#include <stdlib.h>
#include <stdio.h>

int numero;

int main()
{
	printf("Digite um número");
	scanf("%d" , &numero);
	
	int sucessor = numero + 1;
	int antecessor = numero - 1;
	
	printf("O sucessor é:  %d\n" , sucessor);
	printf("O antercessor é:  %d\n" , antecessor);
}