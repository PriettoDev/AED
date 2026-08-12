#include <stdio.h>

void entradaDados(int vet[5]){  //Independente do que se coloque entre os [], o vet nn se interessa, pois aqui o vet está atuando como um ponteiro. Portanto, todo o valor que ele ler no [i], ele vai levar para o endereço de memoria, mudando o valor dentro dela.
    for(int i = 0; i < 5; i++){
        vet[i] = pow(i, 2);
    }
}

/* Mesma coisa que a função de cima, mas uma forma alternativa de se escrever ela, deixando explicitado que o vet é um ponteiro (em ambos os casos).
void entradaDados(int *vet){
    for(int i = 0; i < 5; i++){
        *vet = pow(i, 2);
        vet++;
    }
}
*/

int main(){
    int vetor[5];
    entradaDados(vetor);
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}