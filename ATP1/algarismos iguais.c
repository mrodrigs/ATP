#include <stdio.h>
#include <stdlib.h>

int main(void){
int num, cnum, dig1, dig2;
    printf("Numero a ser verificado:    ");
    scanf("%d", &num);

    if (num > 10){
        cnum = num;
        for (; num != 0; num /= 10){
            dig1 = num % 10;
            num = num / 10;
            while (cnum !=){
                dig2 = num % 10;
                if (dig1 == dig2){
                    printf("Possui digitos iguais"); break;
                    num = 0;
                }
                else {
                    dig1 = dig2;
                }
            }
        }
    }
    else {
        printf("\n\n\nERRO!\n\n\n");
    }
}
