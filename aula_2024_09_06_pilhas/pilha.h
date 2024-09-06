#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef 
    struct {  // tag
        int topo;   // da linha 4 à 8 se chama pilha
        char *v; 
        int capacidade;
    }
pilha; //nome

void inicia_pilha (pilha *, int);
int pilha_cheia (pilha*);
int pilha_vazia (pilha *);
void push (char, pilha *);     //push = empilhar
char pop (pilha *);           //pop = desempilhar
void mostra_pilha (pilha *p);
