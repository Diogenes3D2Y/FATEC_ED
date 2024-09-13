#include <time.h>
#include "pilha.h"
int main () {
pilha p;
inicia_pilha (&p, 10);
srand(time(0));
do {
    if (rand() % 2 == 1) {  //empilhar se for 1
        if (!pilha_cheia(&p)) {
            char letra = rand() % 26 + 65;
            push (letra, &p);
        }
    }
    else{  //senão vai desempilhar
        if (!pilha_vazia(&p)) {
            char letra = pop(&p);
        }
    }
    mostra_pilha(&p);
} while (!pilha_vazia(&p));


    return 0;
}