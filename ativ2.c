#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você digitou: %d\n", idade);
    return 0;
}

