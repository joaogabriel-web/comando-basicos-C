#include <stdio.h>

int main() {
    int idade;
    char s;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Voce tem um documento de identidade? (s/n): ");
    scanf(" %c", &s);

    if (idade >= 18 &&  s == 's')
    {
        printf("Voce pode entrar no evento.");
    }
    else if (idade >= 18 && s == 'n')
    {
        printf("Voce nao pode entrar no evento.");
    }
    else if (idade < 18 && s == 's')
    {
        printf("Voce nao pode entrar no evento.");
    }
    else if (idade < 18 && s == 'n')
    {
        printf("Voce nao pode entrar no evento.");
    }
    

    return 0;
}