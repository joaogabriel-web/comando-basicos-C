#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Voce digitou o numero: %d\n", numero);

    if (numero >= 10 && numero <= 20){
        printf("O numero esta entre 10 e 20.\n");
    } else {
        printf("O numero nao esta entre 10 e 20.\n");
    }

    return 0;

}