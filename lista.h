#ifndef LISTASE_H
#define LISTASE_H

#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct tp_no{
    tp_item info;
    struct tp_no *prox;    
} tp_listase;


tp_listase * inicializa_listase(){ // a mesma coisa que colocar tp_listase *lista = NULL
    return NULL;
}

int listase_vazia(tp_listase *lista){ // verifica se a lista inicial é vazia
    if(lista==NULL) return 1;
    return 0;
}

tp_listase *aloca_listase(){ // ela irá alocar um espaço na memoria do tamanho de bytes que a struct exige
    tp_listase *novo_no;
    novo_no=(tp_listase*) malloc(sizeof(tp_listase));
    return novo_no;
}


/* Esse **L é um ponteiro que está apontando para outro ponteiro para o endereço de memória original da listase*, o que está apontando para o NULL */


int insere_listase_no_fim(tp_listase **l, tp_item e){
    tp_listase *novo_no, *atu;
    novo_no = aloca_listase(); // aqui está pegando o novo nó e apontando ...(?)
    if(novo_no==NULL) return 0; //não alocou memória
    // atribuir os valores para o novo nó;
    novo_no -> info=e;
    novo_no -> prox=NULL;
    //finaliza o encadeamento do nó
    if(listase_vazia(l)){//se for o primeiro nó entra aqui
        l=novo_no;    
    } else {
        atu = l;
        while(atu->prox!=NULL){
            atu=atu->prox; // aponta para o ultimo nó
        }
        atu->prox=novo_no;
    }
    return 1;
}



#endif