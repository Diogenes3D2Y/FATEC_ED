#include "vetor.h"


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
        for (int i = 0; i < t; i++){
            vs[i] = v1[i] + v2[1];
        }
    }