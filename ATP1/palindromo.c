#include <stdio.h>
#include <stdlib.h>

int main(void){

int num, rest, rev=0;

    printf("insira o numero:   ");
    scanf("%d", &num);

    if (num > 10){
        while (num != 0){
            rest = num % 10;
            num /= 10;
            rev = rev * 10 + rest;
        }
    }
    printf("%d", rev);



}
