#include <stdio.h>

int main() {
    int opcao;

    printf("Bem-vindo ao sistema do pedagio!\n");
    printf("Qual eo seu veiculo:\n");
    printf("1. Motocicleta\n");
    printf("2. Carro\n");
    printf("3. Caminhao\n");
    printf("4. Onibus\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Valor do pedagio para motocicleta: R$ 5,00\n");
        break;
    case 2:
        printf("Valor do pedagio para carro: R$ 12,50\n");
        break;
    case 3:
        printf("Valor do pedagio para caminhao: R$ 25,00\n");
        break;
    case 4:
        printf("Valor do pedagio para onibus: R$ 18,00\n");
        break;
    default:
        printf("Opcao invalida.\n");
        printf("Por favor, escolha uma opcao entre 1 e 4.\n");
        break;
    }

    return 0;
}