#include <stdio.h>

int main() {
    char p;

    printf("Enter a character: ");
    scanf("%c", &p);

    switch (p) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Esse caractere e uma vogal.\n");
        break;
    
    default:
        printf("Esse caractere nao e uma vogal.\n");
        printf("E uma consoante.\n");
        break;
    }

    return 0;
}