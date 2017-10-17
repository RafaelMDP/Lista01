/* Leia uma velocidade em m/s (metros por segundo) e apresente-a
 convertida em km/h (quilometros por hora). A formula de convers˜ao e:
  K = M ∗3.6, sendo K a velocidade em km/h e M em m/s. */
#include<stdio.h>

main(){
float km, ms;

printf("Conversor M/s em KM/h \n");
printf("M/s:");
scanf("%f", &ms);

km = ms*3.6;
printf("Velocidade Media em Km %f, \n", km);






return 0;
}
