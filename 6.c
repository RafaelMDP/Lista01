/* Leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A formula de convers˜ao e:
F = C∗(9.0/5.0)+32.0,sendo F a temperatura em Fahrenheite C a temperatura em Celsius.*/

#include<stdio.h>
int main(){
    float c;
    float f;

    printf("Conversor de Celsius \n");
    printf("Digite em C: ");
    scanf("%f", &c);

    f = (c*(9.0/5.0))+32.0;

    printf("C em F: %.2f \n", f);


return 0;
}
