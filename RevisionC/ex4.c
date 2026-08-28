#include <stdio.h>

/*
int main(){
    int x, *px;  //ponteiro é uma variavel que amarzena o endereço de memoria de uma variavel do mesmo tipo.
    px=&x;

    x = 5;
    *px=20; //ao colocar o asterisco atras da variavel ponteiro, estamos mudando o valor da variavel para qual o ponteiro aponta.

    printf("O valor de px eh: %d", *px); //se colocasse o px sem o asterisco, mostraria o valor do endereço da memoria. ao colocar o asterisco mostra o valor a qual o ponteiro se refere, no caso o valor de x.

    return 0;
}
*/
float caclularArea(float base, float altura, float *parea){
    *parea = altura*base;
    return *parea;
}

int main(){
    float base, altura, area;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = caclularArea(base, altura, &area);

    printf("A area eh: %.2f", area);

    return 0;
}