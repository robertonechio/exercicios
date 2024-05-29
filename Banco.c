#include <stdio.h>

int main() {
	int opcao = 0;
	int conta = 0;
	
	while (opcao <= 0 || opcao > 5) {
		printf("Bem vindo ao SeuBanco!");
		printf("Selecione a opcao que voce deseja utilizar:\n\n1 - Cadastramento de Conta\n2 - Deposito\n3 - Sacar\n4 - Transferencias\n5 - Ver contas cadastradas");
		printf("\nOpcao: ");
		scanf("%d", &opcao);
	}
	
	switch(opcao) {
		case 1: {
			cadastrar();
			break;
		}
		case 5: {
			printf("Digite o numero da conta que deseja cadastrar:");
			break;
		}
	}
}


int cadastrar(int conta) {
	conta++;
	printf("Parabéns! Sua conta foi cadastrada, seu número é: %d", conta);
}

int sacar(int dinheiro) {
	
}

int depositar(int dinheiro) {
	
}

int transferir(int dinheiro, int conta) {
	
}

int listarContas() {
	
}
