#include <stdio.h>

int main(){
    int vetor[10];
    int maior, menor;

    for(int i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(i==0){
            maior = menor = vetor[i];
        } else{
            if(vetor[i]>maior)
                maior = vetor[i];
            if(vetor[i]<menor)
                menor = vetor[i];
        }
    }
    printf("O menor e maior valor eh: %d, %d", menor, maior);

    return 0;
}