#include <stdio.h>

int main() {
    float X, Y, Z;

    // X: lado para o outro lado.
    printf("Digite o valor de X: ");
    scanf("%f", &X);

    // Y: para frente para trás.
    printf("Digite o valor de Y: ");
    scanf("%f", &Y);

    // Z: para baixo para cima.
    printf("Digite o valor de Z: ");
    scanf("%f", &Z);

    // Verifica se forma um triângulo válido
    if (X + Y > Z && X + Z > Y && Y + Z > X) {
        // É um triângulo válido, agora classifica
        if (X == Y && Y == Z) {
            printf("Forma um Triangulo Equilatero.\n");
        } else if (X == Y || Y == Z || X == Z) {
            printf("Forma um Triangulo Isosceles.\n");
        } else {
            printf("Forma um Triangulo Escaleno.\n");
        }
    } else {
        printf("Nao forma um triangulo valido.\n");
    }
    
    return 0;
}