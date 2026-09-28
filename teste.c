#include "lista.h"


int main(){
    tp_listase *lista;
    lista = NULL;
    lista=inicializa_listase();
    insere_listase_no_fim(&lista, 10);
    insere_listase_no_fim(&lista, 20);
    insere_listase_no_fim(&lista, 30);
    imprime_listase(lista);

}