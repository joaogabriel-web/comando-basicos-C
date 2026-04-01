#include <stdio.h>
/*calculo de investimento por ano*/
int main(void)
{
    float valor_inicial, valor_final, taxas_juros, anos;
    taxas_juros = 0.05f; // Taxa de juros fixa de 5% (0.05)

    printf("Digite o valor do seu investimento: ");
    if (scanf("%f", &valor_inicial) != 1) return 1;

    printf("Digite o numero de anos que voce quer investir: ");
    if (scanf("%f", &anos) != 1) return 1;

    valor_final = valor_inicial + (valor_inicial * taxas_juros * anos); // juros simples
    printf("O valor final do seu investimento sera: %.2f\n", valor_final);

    return 0;
}
