#include <stdio.h>
#include <stdlib.h>

int main () {
    int m, n;
    srand (time(0));
    m = rand () % 10;
    n = rand () % 100;
    printf("m = %d, n = %d\n", m, n);

    return 0;
}