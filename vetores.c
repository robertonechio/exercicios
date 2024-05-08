#include <stdio.h>

int main() {
	int valor1, valor2, valor3, valor4, valor5, soma = 0;
	printf("\nDigite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &valor2);
	printf("\nDigite o terceiro valor: ");
	scanf("%d", &valor3);
	printf("\nDigite o quarto valor: ");
	scanf("%d", &valor4);
	printf("\nDigite o quinto valor: ");
	scanf("%d", &valor5);
	
	int valores[5] = { valor1, valor2, valor3, valor4, valor5 };
	
	for (int i = 0; i <= 5; i++) {
		soma = soma + valores[i];
	}
	printf("\nA soma dos valores e: %d", soma);
}
