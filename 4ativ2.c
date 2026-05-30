#include <stdio.h>

int main() {
    int op;

    printf("Escolha uma opcao para ver o dia da semana:\n");
    scanf("%d", &op);
    
    switch (op) {
    case 1:
        printf("Segunda-feira\n");
        break;
    case 2:
        printf("Terça-feira\n");
        break;
    case 3:
        printf("Quarta-feira\n");
        break;
    case 4:
        printf("Quinta-feira\n");
        break;
    case 5:
        printf("Sexta-feira\n");
        break;
    case 6:
        printf("Sábado\n");
        break;
    case 7:
        printf("Domingo\n");
        break;
    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}
