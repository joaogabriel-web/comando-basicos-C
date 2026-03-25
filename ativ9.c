#include <stdio.h>
#include <math.h>

int main() {
    printf("Digite o valor da sua compra: ");
    float preco;
    scanf("%f", &preco);
    float preco_total = preco +(preco* 0.20) + (preco * 0.30);
    printf("O valor total da sua compra com imposto e representante é: %.2f\n", preco_total);
    return 0;
}
