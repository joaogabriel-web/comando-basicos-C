#include <stdio.h>

int main() {
    printf("Digite um numero inteiro: ");
    int num;
    scanf("%d", &num);

    int ante = num - 1;
    int suce = num + 1;
    printf("O antecessor de %d é %d\n", num, ante);
    printf("O sucessor de %d é %d\n", num, suce);
    return 0;
}