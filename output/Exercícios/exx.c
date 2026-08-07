#include <string.h> // biblioteca com um conjunto de funções que lida com textos
#include <stdio.h>
//#include <ctype.h> // biblioteca com um conjunto de funções que lida com um caractere por vez

int main(){
    char texto [500], aux;
    int cont=0;
    //char texto [50], letra;
    //int tam, cont=0;

    printf("Digite um texto: ");
    scanf(" %[^\n]s", &texto);
    /*printf("Digite uma letra: ");
    scanf(" %c", &letra);
    tam = strlen(texto);*/

    for(int i=0; texto[i] != '\0'; i++){  //{ melhor metodo para desenvolver o problema
        cont++;
        if(texto[i] == 'r')
            texto[i] = 'l';
        if(texto[i] == 'R')
            texto[i] = 'L';
    }
    aux = texto[0];
    texto[0] = texto[cont-1];
    texto[cont-1]=aux;
    printf("O texto foi criptografado eh: %s", texto);

    /*for(int i=0; i<tam; i++){   //outro metodo para se resolver
        if( toupper(texto[i]) == toupper(letra))
            cont++;
    }
    printf("A letra %c aparece %d vezes no texto '%s'", letra, cont, texto); */
    
    return 0;
}

/*
se x = 4 e y =8
e se eu fizer duas operações, separadamente, com esses valores:
A. y = x++ --> aqui o x começa como 4 e é incrementrado para o 5, mas y começa com o valor inicial de x,4.

B. y = ++x --> aqui p x primeiro é incrementrado, saindo de 4 para 5, e depois o valor de x é atribuido para y, ou seja, no fim x e y são iguais a 5.
*/