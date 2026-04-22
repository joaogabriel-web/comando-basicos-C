#include <stdio.h>

int main() {
    int idade;
    char condicao;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Voce vai estar acompanhado pelo seu responsavel? (s/n): ");
    scanf(" %c", &condicao);

    if (idade >= 12 && condicao == 's')
    {
        printf("Voce pode ir no passeio.");
    }
    else if (idade <= 12 && condicao == 'n')
    {
        printf("Voce nao pode ir no passeio.");
    }
    else if (idade >= 18 && (condicao == 'n' || condicao == 's'))
    {
        printf("Voce nao pode ir no passeio.");
    } else {
        printf("Nao e valido.");
    }
    return 0;
}
