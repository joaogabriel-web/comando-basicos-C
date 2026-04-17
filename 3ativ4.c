#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Numeros divisíveis por 5 e 3: 15, 30, 45, 60, 75, 90, 105, 270 e etc...
    if (numero % 5 == 0 && numero % 3 == 0) {
        printf("O numero é divisível por 5 e por 3.\n");
    } else {
        printf("O numero não é divisível por 5 e por 3.\n");
    }
    
 return 0;
}