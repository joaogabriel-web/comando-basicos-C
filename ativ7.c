#include <stdio.h>
#include <math.h>

int main() {
    printf("Digite quantos dolares voce quer converter pra real: ");
    float num;
    scanf("%f", &num);
    float real = num * 5.25;
    float dolares = real / 5.25;
    printf("O valor em reais é: %.2f\n", real);
    printf("Para comprar mais dolares, com o valor que voce tem em reais (%.2f), voce pode comprar %.2f dolares\n", real, dolares);
    return 0;
}