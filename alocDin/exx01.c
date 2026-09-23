#include <stdlib.h>
#include <stdio.h>

int main(){
    char *pc;
    pc=(char *) malloc(1);
    *pc='@';
    printf("...%c.", *pc);
    free(pc);
    pc=NULL;

    int *pi, i;

    pi = (int *) malloc(sizeof(int)*5);
    if (pi != NULL){
        for(i=0; i<5; i++){
            *(pi+i) = pow(i, 3);
        }
        for(i=0; i<5; i++){
            printf("\n..%d", *(pi+i));
        }
        free(pi);
        pi=NULL; //evita ponteiros soltos
    }

    return 0;
}