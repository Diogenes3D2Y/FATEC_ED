#include "pilha.h"

int main () {
    pilha p;
    inicia_pilha(&p, 10);
    for (int i=65; i<75; i++) {
        push((char)i, &p);
    }
    mostra_pilha(&p);
    while (pilha_vazia(&p) != TRUE) {
        printf("%c foi desempilhado\n", pop(&p));
    }
    mostra_pilha(&p);

    return 0;
}