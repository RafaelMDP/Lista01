/* Leia um angulo em grau se apresente-o convertido em radianos.
A formula de convers˜ao e: R = G∗π/180, sendo G o angulo em graus
e R em radianos e π = 3.14. */
#include<stdio.h>

main(){
float g,r;

printf("Conversor de Angulos \n");
printf("Angulo:");
scanf("%f", &g);

r=g*3.14/180;
printf("O radiano do angulo e %.2f, \n", r);






return 0;
}
