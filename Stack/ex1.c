#include <stdio.h>
#include "pilha.h"

void removeImpares(tp_pilha *p1){
    tp_pilha p2; //Esta linha está declarando a pilha auxiliar. Onde p2 é uma variavel normal do tipo tp_pilha.
    inicializaPilha(&p2);
    while(!pilhaVazia(p1)){ //aqui o p1 vai seco (sem * ou &) pois no inicio da função p1 já havia sido declarado como ponteiro, então queremos saber o conteudo da pilha não o seu endereço durante o laço while.
        tp_item e;
        pop(p1, &e); //o pop é escrito passando o endereço da variavel (&e), e ele enche a variavel com o valor que saiu da pilha.
        if (e%2==0){
            push(&p2, e);
        }
    }

    while (!pilhaVazia(&p2)){
        tp_item e;
        pop(&p2, &e);
        push(p1, e);
    }

}

int main(){
    tp_pilha p;
    inicializaPilha(&p);

    for (int i=1; i<=5; i++){
        push(&p, i);
    }

    removeImpares(&p);
    imprimePilha(p);

    return 0;
}