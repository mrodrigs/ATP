#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

#define EULER 2.7182818284 // CONSTANTE DE EULER

//PROT�TIPOS DE FUN��O//
int Menu (void); //MENU
short Continua(void); //CONTINUA��O DO MENU
int Golbach(); //FUNC�O GOLBACH
int Mersenes();
int Gemeos();
double Stirling(int S);
int Primo (int P);

////////////////////////

//FUN��O MAIN///////////
int main (void){
int option, golb, stir, prim, execmerc, a, b;
    setlocale(LC_ALL,"");
	do {
		option = Menu();
		system("CLS");
		printf("A op��o escolhida foi:  ");

		switch(option) {
		case 1:
			printf("Golbach.\n\n");
			Golbach();
			system("PAUSE");
		break;
		
		case 2:
			printf("Encontrar todos os n�meros primos no intervalo [a,b].\n");
			printf("Insira o valor de a:  ");
			scanf("%d", &a);
			printf("Insira o valor de b:  ");
			scanf("%d", &b);
			if (b > a){
				for ( ; a <= b; a++){
					if (Primo(a) == 1){
					printf("\n%d", a);
				}
				}
			}
			else printf("\n\nErro nos valores atribuidos aos intervalos.\n");
			printf("\n\n");
			system("PAUSE");
		break;
			
		case 3:
			printf("Encontrar todos os n�meros primos g�meos no intervalo [a,b].\n");
			Gemeos();
			system("PAUSE");
        break;

        case 4:
            printf("Mersenes.\n\n");
            printf("Os n�meros primos de Mersenes com 1 <= n <= 30 s�o:\n\n");
            Mersenes();
            system("PAUSE");
        break;

		case 6:
            printf("Stirling.\n\n");
            printf("Introduza o valor: ");
            scanf("%d", &stir);
            printf("O Fatorial aproximado de %d � %lf\n\n", stir, Stirling(stir));
            system("PAUSE");
        break;
        
        default:
        	printf("Instrucoes");
        	system("PAUSE");
		}
	} while ( Continua() );
}
////////////////////////

//FUN��O DO MENU////////
int Menu (void){
int opmenu;
	system("CLS");
	printf("Escolha o problema a ser resolvido:\n");
	printf("1 - Golbach\n");
	printf("2 - Encontrar todos os n�meros primos no intervalo [a,b]\n");
	printf("3 - Encontrar todos os n�meros primos g�meos no intervalo [a,b].\n");
	printf("4 - Mersenes - Encontrar todos os primos de Mersenes no intervalo de 1 a 30.\n");
	printf("5 - \n");
	printf("6 - Stirling - Determinar a aproxima��o do fatorial de um valor inteiro no intervalo [0,30].\n");
	printf("0 - Encerrar Programa e Cr�ditos dos Criadores.\n\n");
	scanf("%d", &opmenu);
	return(opmenu);
}
////////////////////////


//FUN��O PRIMO//////////
int Primo (int P){
	int i, aux=0;
	
	for (i = 2; i < P && aux == 0; i++){
		if (P % i == 0){
			aux = 1;
		}
		if (i > (P / 2)) break;
	}
	if (aux == 0) return(1);
	else return(0);

}
////////////////////////

//FUN��O GOLBACH////////
int Golbach (){
	int i, num = 4;
	for (; num <= 100; num++){
	for (i = 4; i <= num; i++){
		if (Primo(i) == 1 && Primo(num - i) == 1){
			printf("%d = %d+%d\n", num,i,num-i);
		}
	}
}
}
////////////////////////

//FUN�AO PRIMOS GEMEOS//
int Gemeos (){
int veri, a, b;
	printf("\nIntroduza o valor de a:  ");
	scanf("%d", &a);
	printf("Introduza o valor de b:  ");
	scanf("%d", &b);
	if (b > a){
		for (; a <= b; a++){
		if (Primo(a) == 1){
			veri = a + 2;
			if (Primo(veri) == 1 && veri <= b){
				printf("(%d,%d)\n", a, veri);
			}	
		}
		}
	}
	else printf("\n\nErro nos valores atribuidos aos intervalos.\n");
	printf("\n\n");
}
////////////////////////

//FUN��O MERSENES///////
int Mersenes (){
int i, mn, verprim;
    for (i = 2; i <= 30; i++){
        mn = pow(2, i) -1;
        if (Primo(mn) == 1) printf("%d\n\n", mn);
    }
}
////////////////////////

//FUN��O STIRLING///////
double Stirling (int S){
    double raiz, frac;

    raiz = sqrt(2 * S * M_PI);
    frac = pow(S, S) / pow(EULER, S);
    return (raiz*frac);
}
////////////////////////

//CONTINUA�AO DO MENU///
short Continua(void) {
int ch;

  do {
		system("cls");
        printf("\n\n\n      Voce deseja executar outra funcao? [S,N] : ");
		ch = getchar();
		ch= toupper(ch);
  }
  while( (ch != 'S') && (ch != 'N') );

  if(ch == 'S') return(1);
  else return(0);
}
