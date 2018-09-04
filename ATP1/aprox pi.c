#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LIM 1000000

int main(void){

    double i, sinal = 1.0, num = 2.0, den = 1.0, exp;
    double soma1 = 0.0, soma2 = 1.0, soma3 = 0.0, soma4 = 1.0, soma5 = 0.0;
    double pi1, pi2, pi3, pi4, pi5;

    for (i = 1.0; i <= LIM; i++){
        soma1 += (1.0/(2*i -1))* sinal;
        soma2 += 1 / (pow(i+1, 2));
        soma3 += 1 / (pow(2*i -1, 3)) * sinal;
        soma4 *= num / den;
        exp = i - 1.0;
        soma5 += (1.0 / pow(16, exp))*((4.0 / (8*exp + 1.0))-(2.0 / (8* exp + 4.0))-(1.0 / (8 * exp + 5.0))-(1.0 / (8 * exp + 6.0)));
        sinal *= -1;
        if (num > den){
            den += 2.0;
        }
        else {
            num += 2.0;
        }
    }
    pi1 = soma1 * 4.0;
    pi2 = sqrt(6.0 * soma2);
    pi3 = cbrt(soma3 * 32.0);
    pi4 = soma4 * 2.0;
    printf("%f\n\n", pi1);
    printf("%f\n\n", pi2);
    printf("%f\n\n", pi3);
    printf("%f\n\n", pi4);
    printf("%f\n\n", soma5);


}
