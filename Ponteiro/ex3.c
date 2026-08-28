#include <stdio.h>
#include <math.h>

float calculaDelta(float a, float b, float c, float *pdelta){
    *pdelta = pow(b, 2) - (4 * a * c);
    return *pdelta;
}

float calculaRaiz(float a, float b, float c, float delta){
    if (delta > 0) {
        // Duas raízes reais e distintas
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes reais:\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    } 
    else if (delta == 0) {
        // Uma raiz real (raízes iguais)
        float x = -b / (2 * a);
        printf("Uma unica raiz real:\nx = %.2f\n", x);
    } 
    else {
        // Delta negativo: raízes complexas/imaginárias
        printf("A equacao nao possui raizes reais (Delta negativo).\n");
    }
}

int main(){
    float a, b, c, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    calculaDelta(a, b, c, &delta);
    
    calculaRaiz(a, b, c, delta);

    return 0;
}