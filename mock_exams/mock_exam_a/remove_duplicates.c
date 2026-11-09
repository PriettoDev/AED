#include <stdio.h>
#include <stdlib.h>
#include "../../04_dynamic_linear_structures/singly_linked_list/listase.h"
#include "../../04_dynamic_linear_structures/doubly_linked_list/listade.h"
#include "../../04_dynamic_linear_structures/linked_stack/pilhale.h"
#include "../../04_dynamic_linear_structures/linked_queue/filale.h"
 
void imprime_virgula(tp_listase *l){
	tp_listase *atu = l;
	while (atu != NULL) {
		printf("%d", atu->info);
		if (atu->prox != NULL)
    		printf(", ");
    	atu = atu->prox;
	}
	printf("\n");
}

int remove_repetidos(tp_listase **lista){
	tp_listase *nova = inicializa_listase();
	tp_listase *atu;
	int cont = 0;
	atu = *lista;
	
	while(atu != NULL){
		if (busca_listase(nova, atu->info) == NULL){
			insere_listase_no_fim(&nova, atu->info);
		} else{
			cont += 1;
		}
		atu = atu->prox;
	}
	
	destroi_listase(lista);
	*lista = nova;
	
	return cont;
}
 
 
int main(void) {
 	tp_listase *lista = inicializa_listase();
 	int n;
 	
 	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x;
    	scanf("%d", &x);
    	insere_listase_no_fim(&lista, x);
	}
	
	printf("Lista original: ");
	imprime_virgula(lista);
	printf("Lista sem repetidos: ");
	int rem = remove_repetidos(&lista);
	imprime_virgula(lista);
	printf("Elementos removidos: %d\n", rem);
	
	destroi_listase(&lista);
	
    return 0;
}