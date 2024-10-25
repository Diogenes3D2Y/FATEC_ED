#include "no_duplo.h"

t_no_duplo * cosntroi_no (int i) {
    t_no_duplo * apont_no = (t_no_duplo *) malloc (sizeof(t_no_duplo));
    if (apont_no != NULL){
        apont_no->info = i;
        apont_no->ant = apont_no->prox = NULL;
    }
    return apont_no;
}