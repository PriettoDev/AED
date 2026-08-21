#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#define MAX 100

typedef int
    tp_item;

typedef struct{
    int topo;
    tp_item item[MAX];
} tp_pilha;

void inicializaPilha(tp_pilha *p){
    p->topo = -1;
}

int  pilhaVazia(tp_pilha *p){
    if (p->topo == -1) return 1;
    return 0;
}

int pilhaCheia(tp_pilha *p){
    if (p->topo == MAX-1){
        return 1;
    } else{
        return 0;
    }
}




#endif