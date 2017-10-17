/*Leia uma velocidade em km/h (quilometros por hora) e apresente-a
 convertida em m/s (metros por segundo). A formula de convers˜ao e:
 M = K/3.6, sendo K a velocidade em km/h e M em m/s.*/
#include<stdio.h>

main(){
float km, ms;

printf("Conversor KM por m/s \n");
printf("Km:");
scanf("%f", &km);

ms= km/3.6;
printf("Velocidade Media em metros %f, \n", ms);

return 0;
}

