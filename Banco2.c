#include <stdio.h>

int main() {
	int opcao = 0;
	int contasCadastradas = 0;
	int contas[contasCadastradas];
	char valores[contasCadastradas];
	
	do  {
		printf("Bem vindo ao SeuBanco!");
		printf("Selecione a opcao que voce deseja utilizar:\n\n1 - Cadastramento de Conta\n2 - Deposito\n3 - Sacar\n4 - Transferencias\n5 - Ver contas cadastradas");
		printf("\nOpcao: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
		case 1: {
			int conta, sair;
			printf("Cadastro de Conta:\n");
			printf("Insira o numero da conta: ");
			contasCadastradas++;
			valores[contasCadastradas] = 0;
			scanf("%d", &contas[contasCadastradas]);
			printf("\nParabens! Sua conta foi criada com o numero: %d\n\n", contas[contasCadastradas]);
			opcao = 0;
			break;
		}
		case 2: {
			int conta = 0;
			int i;
			printf("Deposito de Valores:\n");
			printf("Insira o numero da conta:");
			scanf("%d", &conta);
			for(i = 1; i <= contasCadastradas; i++) {
				if (contas[i] == conta) {
					int deposito;
					printf("Insira o valor a ser depositado: ");
					scanf("%d", &deposito);
					valores[i] = valores[i] + deposito;
					printf("Parabéns, você depositou %d reais, agora sua conta está com %d reais.", deposito, valores[i]);
				}
			}
			opcao = 0;
			break;
		}case 3: {
			
			break;
		}
		case 4: {
		
			break;
		}
		case 5: {
		
			break;
		}
	}
	}  while (opcao <= 0 || opcao > 5);
}


