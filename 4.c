/* Leia um numero real e imprima o resultado
do quadrado desse numero. */
#include<stdio.h>
#include<stdlib.h>

int main(){
 float x;

 printf("Digite um numero:");
 scanf("%f", &x);

 x = x*x;

 printf("Valor ao quadrado: %.0f \n", x);


return 0;
}
