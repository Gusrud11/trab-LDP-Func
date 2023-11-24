#include <stdio.h>
#include <stdlib.h>

int EME(int vetor[], int tamanho) {
    int menor = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

int main() {
    int vetor[7];
    for (int i = 0; i < 7; i++) {
        printf("Digite o %dº elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int ME = EME(vetor, 7);
    printf("O menor elemento do vetor é: %d\n", ME);
    return 0;
}
