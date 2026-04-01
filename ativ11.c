#include <stdio.h>
#include <math.h>

int main(void)
{
    float fahrenheit, celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) return 1;

    celsius = (fahrenheit - 32) * 5.0 / 9.0; // Fórmula de conversão
    printf("A temperatura em Celsius e: %.2f\n", celsius);

    return 0;
}