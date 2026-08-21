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

int push(tp_pilha *p, tp_item e){
    if (pilhaCheia(p)==1) return 0;
    p->topo++;
    p->item[p->topo]=e;
    return 1;
}

int pop(tp_pilha *p, tp_item *e){
    if (pilhaVazia(p)) return 0;
    *e=p->item[p->topo];
    p->topo--;
    return 1;
}


#endif