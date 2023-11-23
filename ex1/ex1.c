#include <stdio.h>
#include <stdlib.h>

int maximo(int num1, int num2){
    if(num1 > num2){
        printf("o maior numero e: %d", num1);
    }else{
        printf("o maior numero e: %d", num2);
    }
}

int main(){
    int num1, num2;
    printf("digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("digite o segundo numero \n");
    scanf("%d", &num2);
    
    maximo(num1, num2);
    
    return 0;
}
