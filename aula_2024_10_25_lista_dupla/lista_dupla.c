#include "lista_dupla.h"

void inicia_lista (t_lista_dupla *l){
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->n_nos = 0;
}
int lista_vazia (t_lista_dupla *l){
    return l->primeiro == NULL;
}
void insere_inicio (int i, t_lista_dupla *l){
    t_no_duplo * novo = controi_no(i);
    if (novo != NULL){
        if (lista_vazia(l)){
            l->primeiro = novo;
            l->ultimo = novo;
            l->n_nos++;
        }
        else{
            novo->proximo = l->primeiro;
            l->primeiro->anterior = novo;
        }
        l->primeiro = novo;
            l->n_nos++;
    }
}
void insere_fim (int i, t_lista_dupla *l){
    t_no_duplo * novo = controi_no(i);
    if (novo != NULL){
        if (lista_vazia(l)){
            l->primeiro = novo;
        }
        else{
            novo->anterior = l->primeiro;
            l->ultimo->proximo = novo;
        }
        l->ultimo = novo;
            l->n_nos++;
    }
}
void exibe_lista (t_lista_dupla *l, char * msg){
    printf("\n%s\n", msg);
    if (lista_vazia(l)){
        printf("lista vazia");
    }
    else{
        t_no_duplo * batedor = l->primeiro;
        do{
            printf("%d ", batedor->info);
            batedor = batedor->proximo;
        } while (batedor != l->ultimo);
        printf ("%d", batedor->info);
    }
    printf ("\n");
}
