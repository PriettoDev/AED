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

}


#endif