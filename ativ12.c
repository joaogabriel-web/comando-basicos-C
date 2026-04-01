#include <stdio.h>
#include <math.h>

int main(void)
{
    float resultado, n1, n2;
    printf("Digite o primeiro numero: ");
    if (scanf("%f", &n1) != 1) return 1;

    printf("Digite o segundo numero: ");
    if (scanf("%f", &n2) != 1) return 1;

    resultado = n1 * n2;
    printf("A multiplicacao e: %.2f\n", resultado);
    resultado = n1 / n2;
    printf("A divisao e: %.2f\n", resultado);
    resultado = n1 - n2;
    printf("A subtracao e: %.2f\n", resultado);
    resultado = pow(n1, n2);
    printf("A potencia e: %.2f\n", resultado);
    resultado = n1 + n2;
    printf("A soma e: %.2f\n", resultado);
    resultado = (int)n1 % (int)n2;
    printf("O resto da divisao e: %.2f\n", resultado);

    return 0;
}
