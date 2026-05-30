#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Calculadora\n");    
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);


    switch (op) {
    case '+':
        printf("Resultado: %.2f\n", num1 + num2);
        break;
    case '-':
        printf("Resultado: %.2f\n", num1 - num2);
        break;
    case '*':
        printf("Resultado: %.2f\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0) {
            printf("Resultado: %.2f\n", num1 / num2);
        } else {
            printf("Erro: Divisao por zero!\n");
        }
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}