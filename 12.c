/*  Leia uma distancia em milhas e apresente-a convertida em quilometros.
A formula de convers˜ao é:  K = 1,61∗M, sendo K a distancia em quilometros e M em milhas.*/
#include<stdio.h>

main(){
float k, m;

printf("Conversor Milhas em KM \n");
printf("Milhas:");
scanf("%f", &m);

k= 1.61*m;
printf("Distancia milhas para KM %.2f, \n", k);


return 0;
}
