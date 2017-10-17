/* Leia um valor de comprimento em polegadas e apresente-o convertido
em centimetros. A formula de convers˜ao e: C = P ∗2,54, sendo C
o comprimento em centımetros e P o comprimento em polegadas.*/


#include<stdio.h>

main(){
float p,c;

printf("Conversor de Polegadas em centimetro \n");
printf("Polegadas:");
scanf("%f", &p);

c=p*2.54;
printf("O comprimento em centimetro e %.2f, \n", c);






return 0;
}

