#include <stdio.h>
#include <stdlib.h>

float saldo = 0.0;

void verificarSaldo() {
    printf("Seu saldo atual é: R$ %.2f\n", saldo);
}

void realizarDeposito(float valor) {
    saldo += valor;
    printf("Depósito de R$ %.2f realizado com sucesso!\n", valor);
}

void realizarSaque(float valor) {
    if (valor > saldo) {
        printf("Saldo insuficiente para realizar o saque!\n");
    } else {
        saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
    }
}

int main() {
    int opcao;
    float valor;

    do {
        printf("1. Verificar saldo\n");
        printf("2. Realizar depósito\n");
        printf("3. Realizar saque\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                verificarSaldo();
                break;
            case 2:
                printf("Digite o valor do depósito: ");
                scanf("%f", &valor);
                realizarDeposito(valor);
                break;
            case 3:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                realizarSaque(valor);
                break;
            case 4:
                printf("Saindo..\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
