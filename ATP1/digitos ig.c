#include <stdio.h>
#include <stdlib.h>

int main(void){
int num, cnum, dig1, dig2, aux = 0;

    printf("Insira o numero:    ");
    scanf("%d", &num);

    if (num >= 10){
        while (num > 0 && aux == 0){
            dig1 = num % 10;
            num /= 10;
            cnum = num;

            while (cnum > 0 && aux == 0){
                dig2 = cnum % 10;
                if (dig1 == dig2){
                    aux = 1;
                }
                else cnum /= 10;
            }

        }
    }

    if (aux == 0){
        printf("N possui digitos iguais");
    }
    else printf("Possui digitos iguais");




}
