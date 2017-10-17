/*  Leia um valor de volume em litros e apresente-o convertido
em metros cubicos m3. A formula de convers˜ao e: M = L 1000,
sendo L o volume em litros e M o volume em metros cubicos. */

#include<stdio.h>

main(){
float l,m;

printf("Conversor de m3 em L \n");
printf("L:");
scanf("%f", &l);

m=l/1000;
printf("O L em m3 e %.2f, \n", m);






return 0;
}


