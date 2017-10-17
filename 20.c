/*  Leia um valor de massa em quilogramas e apresente-o
convertido em libras. A f´ormula de convers˜ao e: L = k/0.45 ,
sendo K a massa em quilogramas e L a massa em libras.*/
#include<stdio.h>

main(){
float kg,l;

printf("Conversor de kg em Libras \n");
printf("Kg:");
scanf("%f", &kg);

l=kg/0.45;
printf("O kg em Libras e %.2f, \n", l);






return 0;
}


