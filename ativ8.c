#include <stdio.h>
#include <math.h>

float M_PI = 3.14159265358979323846;

int main(int argc, char const *argv[])
{
    printf("Digite o raio da lata: ");
    float raio;
    scanf("%f", &raio);
    printf("Digite a altura da lata: ");
    float altura;
    scanf("%f", &altura);
    float volume = M_PI * pow(raio, 2) * altura;
    printf("O volume da lata é: %.2f\n", volume);
    return 0;
}
