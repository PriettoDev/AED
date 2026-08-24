#include <stdio.h>
#include "pilha.h"

int main(){
    tp_pilha pilha;
    inicializaPilha(&pilha);
    if(pilhaVazia(&pilha)==1){
        printf("Pilha Vazia");
        push(&pilha, 10);
    }
}