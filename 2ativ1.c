#include <stdio.h>

int main() {
    int num1;

    printf("verificaçao de número par ou impar\n");
    printf("Digite o número: \n");
    scanf("%d", &num1);
    
    (num1 % 2 == 0) ? printf("O número é par.\n") : printf("O número é ímpar.\n");

    printf("seu número é: %d\n", num1);

    return 0;
}