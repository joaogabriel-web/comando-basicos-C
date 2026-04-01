#include <stdio.h>

int main(void)
{
    int a, b, temp;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    // Troca os valores de a e b
    temp = a;
    a = b;
    b = temp;

    printf("Depois da troca:\n");
    printf("Primeiro numero: a= %d\n", a);
    printf("Segundo numero: b= %d\n", b);
    printf("Antes era:\n");
    printf("Primeiro numero: a= %d\n", b);
    printf("Segundo numero: b= %d\n", a);

    return 0;
}