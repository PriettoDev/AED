#include <stdio.h>

typedef struct{
    char palavra[20];
}dicionario;

void supervocabulario(dicionario d, dicionario *nd){
    strcpy (d.palavra, nd->palavra);
}

int main(){
    dicionario d[2], nd[2];
    strcpy(d[0].palavra, "poema");
    strcpy(nd[0].palavra, "la");
    strcpy(d[1].palavra, "vida");
    strcpy(nd[1].palavra, "ele");

    for(int i=0; i<2; i++){
        supervocabulario(d[i], &nd[i]);
    }
    
    printf("%s %s", d[0].palavra, d[1].palavra);

    return 0;
}