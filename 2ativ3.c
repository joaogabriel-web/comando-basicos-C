int main() {
    int a, b, c;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("O maior número é: %d\n", a);
    } else if (b > a && b > c) {
        printf("O maior número é: %d\n", b);
    } else {
        printf("O maior número é: %d\n", c);
    }

    return 0;
}
