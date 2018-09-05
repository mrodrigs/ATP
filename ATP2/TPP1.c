#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

#define MAX 40

/*/////////////////////////////////////////////////////////////*/
/*//////////////////PROT�TIPOS DE FUN��O///////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int Menu (void); //MENU
void insertPol(float *ppol1, float *ppol2, float *ppol3);
void printfVetor(float *ppol1, float *ppol2, float *ppol3, float *ppolres);
short Continua(void); //CONTINUA��O DO MENU
void Creditos(void);
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*////////////////////////FUN��O MAIN//////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int main (void){
	int option; 
	float pol1[20] = {0}, pol2[20] = {0}, pol3[20] = {0}, polres[40] = {0};
	
    setlocale(LC_ALL,"");
	do {
		option = Menu(); //EXECU��O DO MENU
		system("CLS");

		//SELE��O DO MENU
		switch(option) {
		case 1:
			insertPol(pol1, pol2, pol3);
		break;

		case 2:
			printfVetor(pol1, pol2, pol3, polres);
			system("PAUSE");
		break;

		case 3:
			printf(".\n\n");
			system("PAUSE");
			
			system("PAUSE");
        break;

        case 4:
			printf(".\n\n");
			system("PAUSE");
			
			system("PAUSE");
        break;

		case 5:
			printf(".\n\n");
			system("PAUSE");
			
			system("PAUSE");
		break;
		
		case 6:
			printf(".\n\n");
			system("PAUSE");
			
			system("PAUSE");
        break;

		case 7:
			printf(".\n\n");
			system("PAUSE");
			
			system("PAUSE");
        break;

		case 8:
			printf(".\n\n");
			system("PAUSE");
			
			system("PAUSE");
        break;

		case 9:
			printf(".\n\n");
			system("PAUSE");
			
			system("PAUSE");
        break;

        default: //CR�DITOS
			Creditos();
			system("PAUSE");
    		exit(0); //FECHAMENTO DO PROGRAMA

		}
	} while ( Continua() ); //CHAMADA DA FUN��O DE CONTINUA��O DO MENU
	system("CLS");
	Creditos();
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*//////////////////////FUN��O DO MENU/////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int Menu (void){
int opmenu;
	system("CLS");
	printf("/*****************************************************************************************************/\n");
	printf("/*****************************************************************************************************/\n");
	printf("/*****************************Algor�tmos e T�cnicas de Programa��o 2**********************************/\n");
	printf("/*******************************Trabalho Pr�tico de Programa��o 01************************************/\n");
	printf("/*****************************************************************************************************/\n");
	printf("/*****************************************************************************************************/\n\n");
	printf("Escolha o que deve ser feito:\n");
	printf("1 - Inserir Polin�mios.\n");
	printf("2 - Visualizar os Polin�mios inseridos.\n");
	printf("3 - Somar Polin�mios.\n");
	printf("4 - Multiplicar Polin�mios.\n");
	printf("5 - Calcular o valor do Polin�mio, dado um X escolhido.\n");
	printf("6 - Multiplicar um Polin�mio por uma constante K.\n");
	printf("7 - Derivar um Polin�mio.\n");
	printf("8 - Integrar um Polin�mio.\n");
	printf("9 - Determinar o grau de um Polin�mio.\n");
	printf("0 - Fechar programa e Cr�ditos do Desenvolvedor.\n\n");
	printf("---> ");
	scanf("%d", &opmenu);
	return(opmenu);
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/



/*/////////////////////////////////////////////////////////////*/
/*//////////Fun��o para inser��o de Polin�mios/////////////////*/
/*/////////////////////////////////////////////////////////////*/
void insertPol(float *ppol1, float *ppol2, float *ppol3){
	int i, grau, option;
	float j;

		printf("Inserir Polin�mios.\n\n");
		printf("1 - Inserir o Primeiro Polin�mio.\n");
		printf("2 - Inserir o Segundo Polin�mio.\n");
		printf("3 - Inserir o Terceiro Polin�mio.\n");
		printf("0 - Sair.\n");
		scanf("%d", &option);
		
		switch(option) {
		case 1:
			printf("Qual o grau do Polin�mio?\n");
			scanf("%d", &grau);
			if (grau > 0 && grau < 21){
				for (i = 0; i <= grau; i++){
					printf("O coeficiente que multiplica X elevado a %d �:\n", i);
					scanf("%f", &j);
					ppol1[i] = j;
			}
			}
			system("PAUSE");
			return;
		break;

		case 2:
			printf("Qual o grau do Polin�mio?\n");
			scanf("%d", &grau);
			if (grau > 0 && grau < 21){
				for (i = 0; i <= grau; i++){
					printf("O coeficiente que multiplica X elevado a %d �:\n", i);
					scanf("%f", &j);
					ppol2[i] = j;
			}
			}
			system("PAUSE");
		break;

		case 3:
			printf("Qual o grau do Polin�mio?\n");
			scanf("%f", &grau);
			if (grau > 0 && grau < 21){
				for (i = 0; i <= grau; i++){
					printf("O coeficiente que multiplica X elevado a %d �:\n", i);
					scanf("%d", &j);
					ppol3[i] = j;
			}
			}
			system("PAUSE");
        break;

        default:
			return;
		}
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*/////////yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy////////////*/
/*/////////////////////////////////////////////////////////////*/

/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


void printfVetor(float *ppol1, float *ppol2, float *ppol3, float *ppol4){
	int pos = 19;
	for(; pos >= 0; pos--){
		if (ppol1[pos] != 0){
			printf("%.2fx^%d  ", ppol1[pos], pos);
	}
}
	printf("\n\n\n");
}


/*/////////////////////////////////////////////////////////////*/
/*///////////////////CONTINUA�AO DO MENU///////////////////////*/
/*/////////////////////////////////////////////////////////////*/
short Continua(void) {
int ch;

  do {
		system("cls");
        printf("\n\n\n      Voc� deseja voltar o menu? [S,N] : ");
		ch = getchar();
		ch= toupper(ch);
  }
  while( (ch != 'S') && (ch != 'N') );

  if(ch == 'S') return(1);
  else return(0);
}

void Creditos(void){
	printf("\n\n\n                     Trabalho Pr�tico de Programa��o 01\n");
	printf("                              Desenvolvido por:\n\n");
	printf("                      Mauricio Gabriel Torres Rodrigues\n");
	printf("                               RA: 181252694\n\n");
	printf("                Curso de Ci�ncias da Computa��o - 2� Semestre\n");
	printf("                  UNESP -Faculdade de Ci�ncias e Tecnologia\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
