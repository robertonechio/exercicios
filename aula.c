#include <stdio.h>

int main() {
	int resposta = 0;
	int potencia(int base, int expoente);
	resposta = potencia(3, 2);
	printf("O resultado da potencia e: %d", resposta);
}

int potencia(int base, int expoente) {
	int calculo = 1;
	while(expoente >= 1) {
		calculo *= base;
		expoente--;
	}
}


