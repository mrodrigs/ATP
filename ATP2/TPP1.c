#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

#define MAX 40

/*/////////////////////////////////////////////////////////////*/
/*//////////////////PROTÓTIPOS DE FUNÇÃO///////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int Menu (void); //MENU
void insertPol(int *ppol1, int *ppol2, int *ppol3);
int printfVetor(int V[3]);
short Continua(void); //CONTINUAÇÃO DO MENU
void Creditos(void);
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*////////////////////////FUNÇÃO MAIN//////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int main (void){
	int option; 
	int pol1[20] = {0}, pol2[20] = {0}, pol3[20] = {0}, polres[40] = {0};
	int teste[2] = {7,9};
    setlocale(LC_ALL,"");
	do {
		option = Menu(); //EXECUÇÃO DO MENU
		system("CLS");

		//SELEÇÃO DO MENU
		switch(option) {
		case 1:
			insertPol(pol1, pol2, pol3);
			printfVetor(pol1);
			system("PAUSE");
		break;

		case 2:
			printfVetor(teste);
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

        default: //CRÉDITOS
			Creditos();
			system("PAUSE");
    		exit(0); //FECHAMENTO DO PROGRAMA

		}
	} while ( Continua() ); //CHAMADA DA FUNÇÃO DE CONTINUAÇÃO DO MENU
	system("CLS");
	Creditos();
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*//////////////////////FUNÇÃO DO MENU/////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int Menu (void){
int opmenu;
	system("CLS");
	printf("/*****************************************************************************************************/\n");
	printf("/*****************************************************************************************************/\n");
	printf("/*****************************Algorítmos e Técnicas de Programação 2**********************************/\n");
	printf("/*******************************Trabalho Prático de Programação 01************************************/\n");
	printf("/*****************************************************************************************************/\n");
	printf("/*****************************************************************************************************/\n\n");
	printf("Escolha o que deve ser feito:\n");
	printf("1 - Inserir Polinômios.\n");
	printf("2 - Visualizar os Polinômios inseridos.\n");
	printf("3 - Somar Polinômios.\n");
	printf("4 - Multiplicar Polinômios.\n");
	printf("5 - Calcular o valor do Polinômio, dado um X escolhido.\n");
	printf("6 - Multiplicar um Polinômio por uma constante K.\n");
	printf("7 - Derivar um Polinômio.\n");
	printf("8 - Integrar um Polinômio.\n");
	printf("9 - Determinar o grau de um Polinômio.\n");
	printf("0 - Fechar programa e Créditos do Desenvolvedor.\n\n");
	printf("---> ");
	scanf("%d", &opmenu);
	return(opmenu);
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/



/*/////////////////////////////////////////////////////////////*/
/*//////////xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//////////////////*/
/*/////////////////////////////////////////////////////////////*/
void insertPol(int *ppol1, int *ppol2, int *ppol3){
	int i, grau, option;
	int j;

		printf("Inserir Polinômios.\n\n");
		printf("1 - Inserir o Primeiro Polinômio.\n");
		printf("2 - Inserir o Segundo Polinômio.\n");
		printf("3 - Inserir o Terceiro Polinômio.\n");
		printf("0 - Voltar ao Menu Inicial.\n");
		scanf("%d", &option);
		
		switch(option) {
		case 1:
			printf("Qual o grau do Polinômio?\n");
			scanf("%d", &grau);
			if (grau > 0 && grau < 21){
				for (i = 0; i < grau; i++){
					printf("O coeficiente que multiplica X elevado a %d é:\n", i);
					scanf("%d", &j);
					ppol1[i] = j;
			}
			}
			system("PAUSE");
		break;

		case 2:
			printf("Qual o grau do Polinômio?\n");
			scanf("%d", &grau);
			if (grau > 0 && grau < 21){
				for (i = 0; i < grau; i++){
					printf("O coeficiente que multiplica X elevado a %d é:\n", i);
					scanf("%d", &j);
					ppol2[i] = j;
			}
			}
			system("PAUSE");
		break;

		case 3:
			printf("Qual o grau do Polinômio?\n");
			scanf("%d", &grau);
			if (grau > 0 && grau < 21){
				for (i = 0; i < grau; i++){
					printf("O coeficiente que multiplica X elevado a %d é:\n", i);
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


int printfVetor(int V[3]){
	int x;
	for(x = 0; x < 5; x++){
		printf("%dx^%d ", V[x], x);
	}
	printf("\n\n\n");
}


/*/////////////////////////////////////////////////////////////*/
/*///////////////////CONTINUAÇAO DO MENU///////////////////////*/
/*/////////////////////////////////////////////////////////////*/
short Continua(void) {
int ch;

  do {
		system("cls");
        printf("\n\n\n      Você deseja voltar o menu? [S,N] : ");
		ch = getchar();
		ch= toupper(ch);
  }
  while( (ch != 'S') && (ch != 'N') );

  if(ch == 'S') return(1);
  else return(0);
}

void Creditos(void){
	printf("                              Desenvolvido por:\n");
	printf("Mauricio Gabriel Torres Rodrigues     ||     Carlos Eduardo Gomes Miranda\n");
	printf("RA: 181252694                         ||     RA: 181251051\n\n");
	printf("              Curso de Ciências da Computação - 1º Semestre\n");
	printf("                UNESP -Faculdade de Ciências e Tecnologia\n\n\n");
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
