#include <stdio.h>
#include <math.h>

void inicio()
{
    printf("**********************\n");
    printf("**  EXPONENCIAÇÃO   **\n");
    printf("**********************\n");
}

int main()
{
    inicio();
    int a, b;
    printf("__________________________\n");
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("__________________________\n");
    printf("Digite o valor do expoente: ");
    printf("\n");
    scanf("%d", &b);
    int resultado = powf(a,b);
    printf("\n");
    printf("O resultado é: %d\n", resultado);
    printf("\n");
    return 0;
}