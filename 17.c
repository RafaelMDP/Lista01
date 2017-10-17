/* Leia um valor de comprimento em centımetros e apresente-o
convertido em polegadas. A formula de convers˜ao e: P = C 2,54,
sendo C o comprimento em centımetros e P o comprimento em polegadas. */
#include<stdio.h>

main(){
float p,c;

printf("Conversor de Centimetros em Polegadas \n");
printf("Cm:");
scanf("%f", &c);

p=c/2.54;
printf("O comprimento em centimetro e %.2f, \n", p);






return 0;
}

