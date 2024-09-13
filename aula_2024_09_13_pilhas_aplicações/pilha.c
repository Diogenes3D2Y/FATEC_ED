#include "pilha.h"

void inicia_pilha (pilha *p, int capacidade) {
    p->topo = 0;
    p->v = (char *) malloc (1 * sizeof(char)); //sizeof(char) = poderia ser " capacidade "
    p->capacidade = capacidade;  // capacidade = valor da pilha
}
int pilha_cheia (pilha *p) {
    if (p->topo == p->capacidade) return TRUE;
    else return FALSE;
}
int pilha_vazia (pilha *p) {
    if (p->topo == 0) return TRUE;
    else return FALSE;
}
//push = EMPILHAR
void push (char c, pilha *p) {        
    p->v[p->topo] = c;
    p->topo++;
}   
 //pop = DESEMPILHAR
char pop (pilha *p) {            
    p->topo--;
    return p->v[p->topo];
}   
void mostra_pilha (pilha *p) {
    if (pilha_vazia(p)==TRUE)
        printf ("pilha vazia");
    else {
        for (int i=p->topo-1; i>=0; i--)
            printf ("%c\n", p->v[i]);
    }
    printf("-----------------\n");
}
        