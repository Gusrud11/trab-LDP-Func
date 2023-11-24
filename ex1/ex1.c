#include <stdio.h>
#include <stdlib.h>


int maximo(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    int maior = maximo(num1, num2);
    
    printf("O maior número é: %d\n", maior);
    
    return 0;
}
