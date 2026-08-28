#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#define MAX 100

typedef int tp_item;

typedef struct{
    tp_item item [MAX];
    int ini, fim;
    //int tam;
}tp_fila;

void inicializaFila(tp_fila *f){
    f->ini = f->fim = MAX-1;
    //f->tam=0;
}

#endif