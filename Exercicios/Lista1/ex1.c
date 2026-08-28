#include <stdio.h>
#include "pilha.h"

void removeImpares(tp_pilha *p1){
    tp_pilha p2; //Esta linha está declarando a pilha auxiliar.
    inicializaPilha(&p2);
    while(!pilhaVazia(p1)){ //aqui o p1 vai seco (sem * ou &) pois no inicio da função p1 já havia sido declarado como ponteiro, então queremos saber o conteudo da pilha não o seu endereço durante o laço while.
        

    }

}