#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpaVetor(int vetor[]){
	int i;
	for (i=0; i<49; i++){
		vetor[i]=-1;
	}
}
void encontraSequencia(int matriz[7][7], int i, int j, 
            int qtde, int soma, int vetor[]){            	
	vetor[qtde] = matriz[i][j];
	qtde++;
	soma+=matriz[i][j];

	if ( qtde >=3 && soma == 10) {
		printf("terminou\n");
		int i;
		for (i=0; i<qtde; i++){
  		    printf("%d",vetor[i]);		
		    if (i<qtde-1) //se for o último elemento, não imprime a vírgula
		    	printf(",");			
		}
		exit(1);
	} else {
		if (  soma > 10){
			return;			
		}
	}

	if (i<6)  //se houver linha embaixo para pesquisar
       encontraSequencia(matriz, i+1, j, qtde, soma, vetor);
	if (j<6) //se houver coluna à direira para pesquisar
       encontraSequencia(matriz, i, j+1, qtde, soma, vetor);	

}

int main(){
	int matriz[7][7]={
					  {0,1,2,4,5,8,9},
					  {1,1,7,8,2,5,9},
					  {2,4,6,5,1,3,1},
					  {3,2,1,4,3,9,8},
					  {10,2,1,5,8,4,9},
					  {8,9,5,4,2,1,10},
					  {5,2,3,1,5,6,7}
						};
	int vetor[49];
	limpaVetor(vetor);
	encontraSequencia(matriz,0,0,0,0,vetor);	
	return 0;
}