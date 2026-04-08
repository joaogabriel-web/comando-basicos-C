#include <stdio.h>

int main() {
    int num1;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    if (num1 < 0){
        printf("O número é negativo.\n");
    }else{
        printf("O número é positivo.\n");
    }

    return 0;
}