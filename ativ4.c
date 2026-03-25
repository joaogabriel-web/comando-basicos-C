#include <stdio.h>

int main() {
    printf("Digite a sua idade: ");
    int idade;
    scanf("%d", &idade);
    printf("Digite o peso do seu pet: ");
    float peso_pet;
    scanf("%f", &peso_pet);
    printf("Qual o genero dele? (M/F): ");
    char genero;
    scanf(" %c", &genero);
    printf("Voce tem %d anos e seu pet pesa %.2f kg. Ele é do genero %c.\n", idade, peso_pet, genero);
    return 0;
}