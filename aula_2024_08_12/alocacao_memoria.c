#include <stdio.h>

int main(){
    int i; //Armazena um inteiro simples
    int *p; // armazena o endereço de um inteiro
    int v[4]; //armazena 4 inteiros, não se esqueça um vetor é sempre um ponteiro

    printf ("tamanho da variavel i: %d bytes\n", sizeof(i));
    printf ("tamanho da variavel p: %d bytes\n", sizeof(p)); //sizeof imprimi o tamanho da variavel, ele diz o tamanho da variavel
    printf ("tamanho da variavel v: %d bytes\n", sizeof(v)); // %d é usado para int (inteiros)

    printf ("veja o conteudo de v: %p\n", v);  // %p é usado para saber o que o ponteiro esta apontando
    printf ("veja o conteudo de p: %p\n", p);
    printf ("veja o conteudo de i: %p\n", i);

    printf ("onde esta o i: %p\n",&i); // esse operador "&" (e comercial) ele da o endereço de memoria de onde esta a variavel
    printf ("onde esta o p: %p\n",&p);
    printf ("onde esta o v: %p\n",&v);

p = &i;  //a variável p aponta para o i, ou seja, contém o endereço de i
// o operador & chama-se operador referência

i = 10;
printf("conteudo apontao por p: %d", *p);
// o operador * chama-se operador derreferencia 

*p = -20;
printf ("para ver se entendemos: i = %d\n", i);

    return 0;
}
