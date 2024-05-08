#include <stdio.h>

int main() {
	int operador = 0;
	float valor1 = 0, valor2 = 0, resultado = 0;
	float somar(float valor1, float valor2);
	float subtrair(float valor1, float valor2);
	float dividir(float valor1, float valor2);
	float multiplicar(float valor1, float valor2);
	
	while (operador <= 0 || operador > 4) {
		printf("\nQual operador deseja usar:\n\n 1 - Somar\n 2 - Subtrair\n 3 - Dividir\n 4 - Multiplicar\n\nOperador: ");
		scanf("%d", &operador);
		if (operador <= 0 || operador > 4) {
			printf("\nOperador invalido, tente novamente...\n");
		}
	}
	while (valor1 <= 0) {
		printf("\nInsira o primeiro valor: ");
		scanf("%f", &valor1);
		if(valor1 <= 0) {
			printf("\nDigite apenas valores positivos, tente novamente...\n");
		}
	}
	while (valor2 <= 0) {
		printf("Insira o segundo valor: ");
		scanf("%f", &valor2);
		if(valor2 < 0) {
			printf("\nDigite apenas valores positivos, tente novamente...");
		}
	}
	
	switch (operador) {
		case 1:
		resultado = somar(valor1, valor2);
		printf("\nO resultado da soma foi: %2.f", resultado);
		break;
		case 2:
		resultado = subtrair(valor1, valor2);
		printf("\nO resultado da subtracao foi: %2.f", resultado);
		break;
		case 3:
		resultado = dividir(valor1, valor2);
		printf("\nO resultado da divisao foi: %2.f", resultado);
		break;
		case 4:
		resultado = multiplicar(valor1, valor2);
		printf("\nO resultado da multiplicacao foi: %2.f", resultado);
		break;
	}
}

float somar(float valor1, float valor2) {
	float calculo;
	calculo = valor1 + valor2;
	return calculo;
}

float subtrair(float valor1, float valor2) {
	float calculo;
	calculo = valor1 - valor2;
	return calculo;
}

float dividir(float valor1, float valor2) {
	float calculo;
	calculo = valor1 / valor2;
	return calculo;
}

float multiplicar(float valor1, float valor2) {
	float calculo;
	calculo = valor1 * valor2;
	return calculo;
}
