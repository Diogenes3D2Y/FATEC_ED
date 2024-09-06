#include <stdio.h>

int main () {
    int a = 18;
    int b = 4;

//  aqui ele esta mostrando apenas a parte inteira, pq 18/4 = 4.5 e ele esta imprimindo apenas a parte inteira que seria 4
    printf ("18 / 4 = %d\n", a/b );  
    printf ("18 / 4 = %f\n", a/b );

    printf ("18f / 4 = %.1f\n", (float)a/b);  //o casting usa o float para também a parte decimal de uma variavel

    return 0;
}