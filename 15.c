/*Leia um angulo em radiano se apresente-o convertido em graus.
A formula de convers˜ao é: G =R*180/pi, sendo G o angulo em graus e
R em radianos  e pi =3.14*/

#include<stdio.h>

main(){
float g,r;

printf("Conversor de Radianos \n");
printf("Radiano:");
scanf("%f", &r);

g= r*180/3.14;

printf("O angulo do radiano e %.2f, \n", g);






return 0;
}
