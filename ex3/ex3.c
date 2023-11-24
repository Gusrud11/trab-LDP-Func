#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaSenha(char senha[]) {
    int i, tamanho, TCE = 0;
    
    tamanho = strlen(senha);
    
    if (tamanho < 8) {
        return 0; 
    }
    
    for (i = 0; i < tamanho; i++) {
        if (senha[i] == '*' || senha[i] == '$' || senha[i] == '&' || senha[i] == '#' || senha[i] == '@') {
            TCE = 1;
            break;
        }
    }
    
    if (!TCE) {
        return 0; 
    }
    
    return 1; 
}

int main() {
    char senha[100];
    
    printf("Digite a senha: ");
    scanf("%s", senha);
    
    if (verificaSenha(senha)) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida!\n");
    }
    
    return 0;
}
