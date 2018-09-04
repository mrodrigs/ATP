#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define ZERO    0.0
#define DOIS    2.0
#define PI      3.14159265

float a, b, c, d; //coeficientes
// TERCEIRO GRAU
float p, q, d2, Z; //auxiliares
float A, B, C, D; //divisão por a e discriminante
float E, R, T; //auxiliares 2
float r1, r2, r3; // raizes
float ri2, ri3; //raizes reais
// SEGUNDO GRAU
float delta;

int main(void){
    // introdução
    printf("################################################################################\n");
    printf("          --> Algoritmo para obtencao de raizes no maximo cubicas <--\n\n");
    printf("################################################################################\n\n\n\n");

    // leitura dos coeficientes da equação
    printf("Insira o valor do coeficiente A (que multiplica x^3):    ");
    scanf("%f", &a);
    printf("Insira o valor do coeficiente B (que multiplica x^2:     ");
    scanf("%f", &b);
    printf("Insira o valor do coeficiente C (que multiplica x):      ");
    scanf("%f", &c);
    printf("Insira o valor do coeficiente D (valor constante):       ");
    scanf("%f", &d);

    // resolução para terceiro grau
    if (a != 0.0){
        A = b/a;
        B = c/a;
        C = d/a;
        p = B - A*A/3.0;
        q = C - A*B/3.0 + (2.0*A*A*A/27.0);
        D = q*q/4.0 + (p*p*p)/27.0; //DISCRIMINANTE
        Z = -q/2.0;
        r1 = cbrt(Z+sqrt(fabs(D))) + cbrt(Z-sqrt(fabs(D))) - A/3.0;
        r2 = -(A+r1)/2.0; //REAL
        r3 = -(A+r1)/2.0; //REAL
        d2 = (A+r1)*(A+r1) + 4.0*C/r1;

        if (D > 0.0){ //    1 RAIZ REAL E 2 CONJUGADAS
            if (d2 < 0.0){
                ri2 = 0.5*sqrt(fabs(-d2)); //i
                ri3 = 0.5*sqrt(fabs(-d2)); //i

                printf("\n\n\nRaiz 1: %f \n", r1);
                printf("Parte Real da Raiz 2: %f  |  Parte imaginaria da raiz 2: + %f*i \n", r2, ri2);
                printf("Parte Real da Raiz 3: %f  |  Parte imaginaria da raiz 3: - %f*i \n\n\n\n", r3, ri3);
            }
            else {
                ri2 = 0.5*sqrt(fabs(d2)); //i
                ri3 = 0.5*sqrt(fabs(d2)); //i
                printf("\n\n\nRaiz 1: %f \n",r1);
                printf("Raiz 2: %f + %f*i  \n", r2, ri2);
                printf("Raiz 3: %f - %f*i  \n", r3, ri3);

            }


        }
        else {
            E = sqrt(fabs(-D));
            R = sqrt(fabs(q*q/4.0 + E*E));
            T = acos(-q/(2.0*R));
            r1 = 2.0 * cbrt(fabs(R))*cos(T/3.0) - A/3.0;
            r2 = 2.0 * cbrt(fabs(R))*cos((T+2.0*PI)/3.0) - A/3.0;
            r3 = 2.0 * cbrt(fabs(R))*cos((T+4.0*PI)/3.0) - A/3.0;
        }


    }
    else if (b != 0.0) {
            delta = c*c - 4.0 * b * d;
            if (delta >= 0 ){
                r1 = (-c + sqrt(delta)) / 2.0*b;
                r2 = (-c - sqrt(delta)) / 2.0*b;
                printf ("\n\nx' = %f     x'' = %f\n\n", r1, r2);
            }
            else{
                r1 = (-c + sqrt(-delta)) / 2.0*b;
                r2 = (-c - sqrt(-delta)) / 2.0*b;
                printf ("\n\nx' = %f     x'' = %f\n\n", r1, r2);
            }
    }
    else if (c != 0){
            r1 = -d / c;
            printf ("\n\n x = %f\n\n", r1);

    }
    else{
        printf("\n\nA expressao inserida nao e uma equacao, e sim uma constante : %f\n\n", d);
    }
    system("PAUSE");
    return(0);
}
