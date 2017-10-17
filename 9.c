/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.
A formula de convers˜ao e: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/
#include<stdio.h>

main(){
float k, c;

printf("Conversor Kelvin \n");
printf("Digite um valor:");
scanf("%f", &c);

k = c +273.15;
printf("K em C %.2f \n", k);






return 0;
}

