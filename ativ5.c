#include <stdio.h>
#include <math.h>

int main() {
    printf("Digite um numero: ");
    float num1;
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    float num2;
    scanf("%f", &num2);
    float soma = num1 + num2;
    printf("A soma do dois numeros sao: %.2f\n", soma);
    return 0;
}