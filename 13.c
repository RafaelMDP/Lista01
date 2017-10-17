 /*Leia uma distancia em quilometros e apresente-a convertida em milhas.
 A formula de convers˜ao é: M = K 1,61, sendo K a distancia em quilometros e M em milhas. */

#include<stdio.h>

main(){
float km, m;

printf("Conversor KM por milhas \n");
printf("Km:");
scanf("%f", &km);

m = km/1.61;
printf("KM para Milhas %.2f, \n", m);






return 0;
}
