#include <stdio.h>

int main() {
    float valor, credito, pix, boleto;
    int pagar, num;

    printf("Quanto foi o valor total da sua compra: ");
    scanf("%f", &valor);

    printf("Qual vai ser a forma de pagamento: \n");
    printf("1-Debito\n");
    printf("2-Credito\n");
    printf("3-Pix\n");
    printf("4-Boleto\n");
    scanf("%i", &pagar);

    switch (pagar){
    case 1:
        printf("O valor a ser pago no debito sera de: %.2f", valor);
        break;
    case 2:
        printf("Quantas parcelas voce deseja fazer: ");
        scanf("%d", &num);
        credito = valor / num;
        printf("O valor de cada parcela sera de: %.2f", credito);
        break;
    case 3:
        pix = valor * 0.95;
        printf("O valor a ser pago no pix sera de: %.2f", pix);
        break;
    case 4:
        boleto = valor * 1.02;
        printf("O valor a ser pago no boleto sera de: %.2f", boleto);
        break;
    default:
        printf("Opçao invalida");
        break;
    }

    return 0;
}