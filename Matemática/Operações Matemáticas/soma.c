#include <stdio.h>

void inicio()
{
    printf("*************\n");
    printf("**  SOMA   **\n");
    printf("*************\n");
}

int main()
{
    inicio();
    float a, b;
    printf("__________________________\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("__________________________\n");
    printf("Digite o segundo número: ");
    printf("\n");
    scanf("%f", &b);
    float soma = a + b;
    printf("O resultado é: %.2f\n", soma);
    printf("\n");
    return 0;
}