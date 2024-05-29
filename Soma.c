#include <stdio.h>

int main() {
	int vetor[10];
	int i = 0;
	int soma = 0;
	
	for (i = 0; i < 10; i++) {
		printf("Digite o numero da posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < 10; i++) {
		soma = soma + vetor[i];
	}
	
	printf("A soma dos numeros resulta em: %d", soma);
}
