/* Leia uma temperatura em graus Fahrenheit e apresente-a
convertida em graus Celsius. A formula de convers˜ao e:
C = 5.0∗(F −32.0)/9.0, sendo C a temperatura em Celsiuse F a temperatura em Fahrenheit.*/
#include<stdio.h>
int main(){

float f, c;

printf("Conversor Fahrenheit \n");
printf("Digite um valor:");
scanf("%f", &f);

c=5.0*(f-32.0)/9.0;

printf("F em C %.2f \n", c);






return 0;
}
