/* Leia uma temperatura em graus Kelvin e apresente-a
convertida em graus Celsius. A formula de convers˜ao e:
C = K − 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/
#include<stdio.h>

main(){
float k, c;

printf("Conversor Fahrenheit \n");
printf("Digite um valor:");
scanf("%f", &k);

c= k-273.15;
printf("K em C %.2f \n", c);






return 0;
}
