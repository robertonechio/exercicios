#include <stdio.h>

int main() {
	int numero, i;
	
	printf("Digite o numero da tabuada desejada: ");
	scanf("%d", &numero);
	
	printf("\nTabuada do %d\n\n", numero);
	for (i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
}
