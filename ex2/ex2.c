#include <stdio.h>
#include <stdlib.h>

int depo(){
    printf("Digite o valor do deposito: \n");
    int deposito=0, saldo=0;
    scanf("%d", &deposito);

    int saldo() = saldo + deposito;
    return saldo;
}

int saque(){
    
        printf("Digite o valor do saque: \n");
        int valor_saque=0, saldo=0;
        scanf("%d", &valor_saque);
        int saldo() = saldo - valor_saque;

        return saldo;

}

int saldo(){
    int saldo=0;
    printf("seu saldo é %d", saldo);
    return saldo;
}

int main(){
    int op;
    do{
        printf("\n1 - Saldo\n");
        printf("\n2 - Deposito\n");
        printf("\n3 - Saque\n");
        printf("\n4 - Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                saldo();
                break;
            case 2:
                depo();
                break;
            case 3:
                saque();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    }while(op != 4);
    return 0;

}