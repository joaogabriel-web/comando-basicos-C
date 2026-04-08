#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16 && idade < 18 || idade > 65)
    {
        printf("Eleitor facultativo.\n");
    }
    else if (idade < 16)
    {
        printf("Não é eleitor.\n");
    }
    else
    {
        printf("Eleitor obrigatório.\n");
    }
    return 0;
}