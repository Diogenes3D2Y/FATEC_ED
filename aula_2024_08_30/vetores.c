#include "vetor.h"
int main () {
    srand(time(0));
    //na função principal vamos pedir o tamanho do vetor
    printf ("digite o tamanho do vetor, 0 encerra: ");
    int t;
    scanf ("%d", &t);
    while (t > 0) {
        // alocar o vetor de inteiros dinamicamente
        int * v = (int *) malloc (t * sizeof(int));
        printf ("\nendereco alocado: %p\n", v);
        preenche_vetor (v, t);
        //exibe_vetor (v, t);
        free(v);
        printf ("\ndigite o novo tamanho, 0 encerra: ");
        scanf("%d", &t);
    }
    
    return 0;
    }

    //implementação das funções auxiliares
    //DIca: todo vetor é um ponteiro, mas nem todo ponteiro é um vetor
    void preenche_vetor (int *v, int t){
        for ( int i=0; i<t; i++)
            v[i] = rand() % (t*10);
    }
     void exibe_vetor(int *v, int t) {
        for (int i=0; i<t; i++) {
            printf ("%d ", v[i]);
        }
        
            
     }

     void soma_vetores (int *v1, int *v2, int *vs, int t) {
        for

     }

    