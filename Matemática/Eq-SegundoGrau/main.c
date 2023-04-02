#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double bhaskara(double delta, int a, int b, int c)
{
    double raiz1 = ((-1 * b) + delta) / (2 * a);
    double raiz2 = ((-1 * b) - delta) / (2 * a);
    double verticeX = -1*(b/(2*a));
    double verticeY = -1*(delta/(4*a));
    printf("O x¹ vale: %.4f\n", raiz1);
    printf("O x² vale: %.4f\n", raiz2);
    printf("Vértice da parábola: (%.2f , %.2f)\n", verticeX,verticeY);
    if(a>0){
        printf("Concavidade: para baixo\n");
    } else{
        printf("Concavidade: para cima\n");
    }
    printf("\n");
}
int calculaDelta(int a, int b, int c)
{
    if (a == 0)
    {
        printf("Não é uma equação do segundo grau :(\n");
        return 0;
    }
    printf("Expressão a ser calculada: %dx²%+dx%+d\n", a, b, c);
    printf("\n");

    int num = (b * b) - (4 * a * c);
    double delta = sqrt(num);
    printf("DELTA: %+.2f\n", delta);
    if (delta < 0)
    {
        printf("Equação não possui solução para o conjunto dos números REAIS!!");
        return 0;
    }
    else if(delta > 0)
    {
        return bhaskara(delta, a, b, c);
    }
}
int recebeValor()
{
    int a, b, c;
    printf("____________________________________\n");
    printf("Digite o valor do coeficiente A: ");
    scanf("%d", &a);
    printf("____________________________________\n");
    printf("Digite o valor do coeficiente B: ");
    scanf("%d", &b);
    printf("____________________________________\n");
    printf("Digite o valor do coeficiente C: ");
    scanf("%d", &c);
    printf("\n");
    return calculaDelta(a, b, c);
}
void inicio(){
    printf("*******************************\n");
    printf("** Equações do Segundo Grau  **\n");
    printf("*******************************\n");
    printf("\n");
}
int main()
{
    inicio();
    recebeValor();
}
