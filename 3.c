//Peca ao usuario para digitar tres valores
//inteiros e imprima a soma deles.
#include <stdio.h>
int main(){
    int v1;
    int v2;
    int v3;
    int res;

    printf("Primeiro valor:");
    scanf("%i", &v1);
    printf("Segundo valor:");
    scanf("%i", &v2);
    printf("Terceiro valor:");
    scanf("%i", &v3);

    res = (v1+v2+v3);

    printf("A soma dos valores: %i", res);





return 0;
}

