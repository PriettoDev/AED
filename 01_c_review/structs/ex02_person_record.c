#include <stdio.h>


typedef struct{ //ao usar o typedef, não fica mais necessario, ao chamar essa variavel no main com o 'struct tp_nome_da_variavel_struct'. Como usou o typedef só precisa escrever o 'tp_nome_da_variavel_struct'.
    int dia, mes, ano;
}stDATA; //tipo de dado abstrato

typedef struct{
    char nome[30];
    float salario;
    stDATA nascimento;
}stPESSOA; //Tipo de dado abstrato

void entrada_pessoa(stPESSOA *dados);
void imprime_pessoa(stPESSOA *dados);

int main(){
    /*stPESSOA dados; //aqui foi criado a variavel dados do tipo srPESSOA
    printf("Digite o nome da pessoa:\n");
    scanf(" %[^\n]s", &dados.nome);
    printf("Digite o salario da pessoa:\n");
    scanf(" %[^\n]s", &dados.salario);
    printf("Digite a data de nascimento da pessoa:\n");
    scanf(" %[^\n]s", &dados.nascimento.dia);
    scanf(" %[^\n]s", &dados.nascimento.mes);
    scanf(" %[^\n]s", &dados.nascimento.ano);*/

    stPESSOA dados; //criando a variavel dados do tipo stPESSOA
    entrada_pessoa(&dados);
    imprime_pessoa(&dados);

    return 0;
}

void entrada_pessoa(stPESSOA *dados){
    printf("Digite o nome da pessoa:\n");
    scanf(" %[^\n]s", &dados->nome);
    printf("Digite o salario da pessoa:\n");
    scanf("%f", &dados->salario);
    printf("Digite a data de nascimento da pessoa:\n");
    scanf("%d", &dados->nascimento.dia); //se o elemento anterior for um ponteiro, deve-se usar um seta '->', se não for, deve-se usar um ponto '.'
    scanf("%d", &dados->nascimento.mes);
    scanf("%d", &dados->nascimento.ano);
}

void imprime_pessoa(stPESSOA *dados){
    printf("Dados inseridos:\n");
    printf("Nome: %s\n", dados->nome);
    printf("Salario: %.2f\n", dados->salario);
    printf("Data de nascimento: %d/%d/%d", dados->nascimento.dia, dados->nascimento.mes, dados->nascimento.ano);
}