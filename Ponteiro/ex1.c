#include <stdio.h>

int main(){
    int x, y, *px, *py, **ppy;
    x = 4;
    y = 7;
    px = &x;
    py = &y;

    *px = 5; //Esta linha está mudando o valor do x, uma vez que o *px é um ponteiro que aponta para o valor dentro da variavel inteira x. X saiu de 4 para 5.

    *px = *py; //Aqui o ponteiro *px assume o valor que o ponteiro *py aponta. Ou seja, se o ponteiro *px apontava para o valor x=5, agora ele vai assumir o mesmo valor da variavel que o ponteiro *py aponta, que é y=7. Ou seja, x agora é igual a 7 (ficou tipo x=y=7).

    px = py; //Aqui estamos fazendo com que o valor dentro do ponteiro px, tenha o mesmo valor que o ponteiro py. Por exemplo, se o ponteiro py aponta para o endereço de memoria 92 e esse endereço de memoria é da variavel y, e o ponteiro px aponta para o endereço de memoria 30 e esse endereço de memoria é da variavel x. Ao colocar px=py estamos dizendo que o ponteiro px agora aponta para o mesmo endereço de memoria que o py, ou seja, 92.

    ppy = &py; //Aqui estamos falando que o ponteiro do ponteiro, ppy, está pontando para o endereço de memoria do ponteiro py, 102 por exemplo.

    **ppy = 10; //Aqui estamos falando que o valor '10' está sendo "direcionado" ao valor da variavel que o ponteiro py esta apontando. Ou seja, se o ponteiro py aponta para a variavel y, cujo valor é igual a 7, agora y ficou igual a 10.

    return 0;
}