#include <stdio.h>
#include <stdlib.h>

int main(void){
int num, i, soma=0;

    for (num = 2; num < 1000000; num++){
        soma = 0;
    for (i = 1; i < num; i++){
        if (num % i == 0){
            soma += i;
        }
        if (soma == num){
        printf("\n\n%d\n\n\n", num);
    }
    }
    }
return(0);
}
