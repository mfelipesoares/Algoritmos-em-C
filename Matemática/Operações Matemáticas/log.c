#include <stdio.h>
#include <math.h>

void inicio()
{
    printf("********************\n");
    printf("**  LOGARÍTMICO   **\n");
    printf("********************\n");
}

int main()
{
    inicio();
    float a, b;
    printf("__________________________\n");
    printf("Digite um número: ");
    scanf("%f", &a);
    printf("__________________________\n");
    printf("Digite o valor da base: ");
    printf("\n");
    scanf("%f", &b);
    float resultado = log(a) / log(b);
    printf("\n");
    printf("O resultado é: %.4f\n", resultado);
    printf("\n");
    return 0;
}