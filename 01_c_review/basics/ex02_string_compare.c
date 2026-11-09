#include <stdio.h>
#include <string.h> // ao usar essa biblioteca, podemos fazer o seguinte comando. Ao declarar "strcpy(nome, "prietto"); estamos igualando as strings, ou seja, nome=="prietto". Sem essa biblioteca não seria possivel.

int main(){
    /*char nome[10];  // Char se usa aspas simples para fazer uma declaração de variavel
    char sobrenome[10];

    printf("Digite o seu nome: ");
    scanf("%[^\n]s", &nome);  // o uso do "[^\n] (APENAS PARA STRING) garante que ao escrever um nome completo por exemplo, o espaço entre o nome e o sobrenome "pedro _ maia, o compilador não ignore o restante do espaço, garantindo assim que todo o texto que escrevi apareça. (APENAS PARA STRING)"7

    printf("Digite o sobrenome: ");
    scanf(" %[^\n]s", &sobrenome);

    strcpy(sobrenome, "xyz");

    printf("O nome eh: %s %s", nome, sobrenome);
*/
    char login[50];

    scanf("%s", login);
    int x = strcmp(login, "Pedro");
    if(x==0){
        printf("iguais");
    } else{
        printf("diferentes");
    }


    return 0;
}