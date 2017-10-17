/* Leia um valor de volume em metros cubicos m3 e apresente-o
convertido em litros. A formula de convers˜ao e: L = 1000∗M,
sendo L o volume em litros e M o volume em metros cubicos.*/

#include<stdio.h>

main(){
float l,m;

printf("Conversor de m3 em L \n");
printf("m3:");
scanf("%f", &m);

l=1000*m;
printf("O m3 em L e %.2f, \n", l);






return 0;
}


