#include <stdio.h>

int main(){

    float n1, n2, n3, media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media >= 5.0 && media < 7.0) {
        printf("Aluno em recuperacao.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    printf("A media e: %.2f\n", media);
    return 0;
}