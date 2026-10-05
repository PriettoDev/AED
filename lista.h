#ifndef LISTASE_H
#define LISTASE_H
// header file de lista simplesmente encadeada
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
    novo_no = aloca_listase(); // aqui está pegando o novo nó e apontando para o NULL
    if(novo_no == NULL) return 0; // não alocou memória
    // atribuir os valores para o novo nó;
    novo_no -> info = e;
    novo_no -> prox = NULL;
    // finaliza o encadeamento do nó
    if(listase_vazia(*l)){ // se for o primeiro nó entra aqui
        *l = novo_no;    
    } else {
        atu = *l;
        while(atu->prox != NULL){
            atu=atu->prox; // aponta para o ultimo nó
        }
        atu -> prox = novo_no;
    }
    return 1;
}



void imprime_listase(tp_listase *lista){
    tp_listase *atu;
    atu=lista;
    while(atu!=NULL){
        printf("%d\n", atu -> info);
        atu = atu -> prox;
    }
}


int remove_listase(tp_listase **lista, tp_item e){
    tp_listase * ant, *atu;
    atu=*lista;
    ant=NULL;
    while((atu!=NULL) && (atu -> info!=e)){
        ant=atu;
        atu=atu->prox;
    }

    if(atu==NULL) return 0; //não foi encontrado o elemento
    if(ant==NULL){ //se for retirado o primeiro termo
        *lista=atu->prox; // fazendo a lista apontar para o termo subsequente que foi retirado

    }
    else{
        ant->prox=atu->prox; //fazendo a interligação entre o termo anterior e o termo subsequente ao termo retirado

    }
    free(atu);
    atu=NULL;
    return 1;
}



tp_listase *busca_listase(tp_listase *lista, 
                                    tp_item e){
    tp_listase *atu;
    atu=lista;
    while((atu!=NULL)&&(atu->info!=e)){
        atu=atu->prox;
    }
    if (atu==NULL) return NULL; //trecho redundante, pode comentar está linha que não irá alterar o codigo, foi feito para ser mais didatico está etapa.
    return atu;
}


int tamanho_listase(tp_listase *lista){
    int cont = 0;
    tp_listase *atu;
    atu=lista;
    while (atu!=NULL){
        cont++;
        atu=atu->prox;
    }
    return cont;    
}


void destroi_listase(tp_listase **l){
    tp_listase *atu;
    atu=*l;
    while(atu!=NULL){
        *l=atu->prox;
        free(atu);
        atu=*l;
    }
    *l=NULL;
}

    void insere_listase_no_inicio(tp_listase **l, tp_item e){
        tp_listase *novo_no, *atu;
        novo_no = aloca_listase();
        if(novo_no==NULL){
            return 0;
        }
        //tenho que criar a função que insere no inicio da lista um valor.
    }

#endif