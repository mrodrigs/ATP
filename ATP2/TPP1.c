#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>


/*/////////////////////////////////////////////////////////////*/
/*//////////////////PROTÓTIPOS DE FUNÇÃO///////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int Menu (void); //MENU
void insertPol(float *ppol1, float *ppol2, float *ppol3);
void printfVetor(float *ppol1, float *ppol2, float *ppol3, float *ppolres);
void sumPol(float *ppol1, float *ppol2, float *ppol3, float *ppolres);
void multPol(float *ppol1, float *ppol2, float *ppol3, float *ppolres);
void multconstK(float *ppol1, float *ppol2, float *ppol3, float *ppolres);
void degreePol(float *ppol1, float *ppol2, float *ppol3, float *ppolres);
short isEmpty(int check, float *ppol1, float *ppol2, float *ppol3);
short Continua(void); //CONTINUAÇÃO DO MENU
short ContinuaPol(void);
void Creditos(void);
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*////////////////////////FUNÇÃO MAIN//////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
int main (void){
	int option; 
	float pol1[21] = {0}, pol2[21] = {0}, pol3[21] = {0}, polres[41] = {0};
	
    setlocale(LC_ALL,"");
	do {
		option = Menu(); //EXECUÇÃO DO MENU
		system("CLS");

		//SELEÇÃO DO MENU
		switch(option) {
		case 1:
			insertPol(pol1, pol2, pol3);
		break;

		case 2:
			printfVetor(pol1, pol2, pol3, polres);
		break;

		case 3:
			sumPol(pol1, pol2, pol3, polres);
        break;

        case 4:
        	multPol(pol1, pol2, pol3, polres);
        break;

		case 5:

		break;
		
		case 6:
			multconstK(pol1, pol2, pol3, polres);
        break;

		case 7:

        break;

		case 8:

        break;

		case 9:
			degreePol(pol1, pol2, pol3, polres);
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
/*//////////Função para inserção de Polinômios/////////////////*/
/*/////////////////////////////////////////////////////////////*/
void insertPol(float *ppol1, float *ppol2, float *ppol3){
	int i, grau, option;
	float j;
	char ch;
	
	system("CLS");
	printf("   Inserir Polinômios\n\n");
	printf("1. Inserir Polinômio na Posição 1.\n");
	printf("2. Inserir Polinômio na Posição 2.\n");
	printf("3. Inserir Polinômio na Posição 3.\n");
	printf("4. Resetar Polinômios!!!\n");
	printf("0. Sair.\n");
	printf("---> ");
	scanf("%d", &option);
	printf("\n");
		
	switch(option) {
	case 1:
		j = 0, grau = 0;
		if (isEmpty(1, ppol1, ppol2, ppol3) == 0){
			printf("Qual o grau do Polinômio?\n");
			scanf("%d", &grau);
			printf("\n");
			if (grau >= 0 && grau < 21){
				for (i = 0; i <= grau; i++){
					printf("O coeficiente que multiplica X elevado a %d é:\n", i);
					scanf("%f", &j);
					ppol1[i] = j;
				}
			}
		}
	break;

	case 2:
		j = 0, grau = 0;
		if (isEmpty(2, ppol1, ppol2, ppol3) == 0){
			printf("Qual o grau do Polinômio?\n");
			scanf("%d", &grau);
			printf("\n");
			if (grau >= 0 && grau < 21){
				for (i = 0; i <= grau; i++){
					printf("O coeficiente que multiplica X elevado a %d é:\n", i);
					scanf("%f", &j);
					ppol2[i] = j;
				}
			}
		}
	break;

	case 3:
		j = 0, grau = 0;
		if (isEmpty(3, ppol1, ppol2, ppol3) == 0){
			printf("Qual o grau do Polinômio?\n");
			scanf("%d", &grau);
			printf("\n");
			if (grau >= 0 && grau < 21){
				for (i = 0; i <= grau; i++){
					printf("O coeficiente que multiplica X elevado a %d é:\n", i);
					scanf("%f", &j);
					ppol3[i] = j;
				}
			}
		}
	break;

	case 4:
		for (i = 0; i <= 20; i++){
			ppol1[i] = 0;
			ppol2[i] = 0;
			ppol3[i] = 0;
		}
        break;

	default:
		return;
	}

	do{					
		system("cls");
		printf("\n\nConcluído. Deseja voltar ao menu de polinômios? [S,N] : ");
		ch = getchar();
		ch = toupper(ch);
	} while( (ch != 'S') && (ch != 'N') );	
	
	if(ch == 'S'){
		insertPol(ppol1, ppol2, ppol3);
	}
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*/////////Função para Visualizar Polinômios///////////////////*/
/*/////////////////////////////////////////////////////////////*/
void printfVetor(float *ppol1, float *ppol2, float *ppol3, float *ppolres){
	int option, pos;
	char ch;

	system("CLS");
	printf("Qual polinômio deseja visualizar?\n");
	printf("1. Primeiro Polinômio.\n");
	printf("2. Segundo Polinômio.\n");
	printf("3. Terceiro Polinômio.\n");
	printf("4. O Polinômio resultante da última operação.\n");
	printf("0. Sair\n");
	printf("---> ");
	scanf("%d", &option);
	printf("\n");
	
	switch(option) {
	case 1:
		for(pos = 20; pos >= 0; pos--){
			if (ppol1[pos] != 0){
			printf("%.2fx^%d  ", ppol1[pos], pos);
		}
		}
		printf("\n\n\n");			
		system("PAUSE");
	break;

	case 2:
		for(pos = 20; pos >= 0; pos--){
			if (ppol2[pos] != 0){
			printf("%.2fx^%d  ", ppol2[pos], pos);
		}
		}
		printf("\n\n\n");
		system("PAUSE");
	break;

	case 3:
		for(pos = 20; pos >= 0; pos--){
			if (ppol3[pos] != 0){
			printf("%.2fx^%d  ", ppol3[pos], pos);
		}
		}
		printf("\n\n\n");
		system("PAUSE");
	break;

	case 4:
		for(pos = 40; pos >= 0; pos--){
			if (ppolres[pos] != 0){
			printf("%.2fx^%d  ", ppolres[pos], pos);
		}
		}
		printf("\n\n\n");
		system("PAUSE");
	break;

	default:
		return;
	}

	do{
		system("cls");
		printf("\n\nGostaria de voltar ao menu de visualização de polinômios? [S,N] : ");
		ch = getchar();
		ch = toupper(ch);
	} while( (ch != 'S') && (ch != 'N') );	
	
	if(ch == 'S'){
		printfVetor(ppol1, ppol2, ppol3, ppolres);
	}
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*/////////Função para Somar Polinômios////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
void sumPol(float *ppol1, float *ppol2, float *ppol3, float *ppolres){
	int i, pos, option1, option2;
	printf("Quais polinômios você deseja somar?\n");
	printf("1. Primeiro Polinômio.\n");
	printf("2. Segundo Polinômio.\n");
	printf("3. Terceiro Polinômio.\n");
	printf("0. Sair\n\n");
	printf("Escolha um acima:\n");
	printf("---> ");
	scanf("%d", &option1);
	if(option1 == 0){
		return;
	}
	printf("\nAgora, escolha outro acima:\n");
	printf("---> ");
	scanf("%d", &option2);

	if (option1 != option2){
		if (option1 == 1 || option2 == 1){
			if (option1 == 2 || option2 == 2){
				for(i = 0; i <= 20;i++){
					ppolres[i] = ppol1[i] + ppol2[i];
				}
			}
			if (option1 == 3 || option2 == 3){
				for(i = 0; i <= 20;i++){
					ppolres[i] = ppol1[i] + ppol3[i];
				}
			}
		}
		else if (option1 == 3 || option2 == 3){
			for(i = 0; i <= 20;i++){
					ppolres[i] = ppol3[i] + ppol2[i];
			}	
		}
	}
	else{
		printf("Insira dois números referentes a polinômios diferentes.\n\n");
		system("PAUSE");
	}

	printf("O resultado da soma é:\n\n");
	for(pos = 20; pos >= 0; pos--){
		if (ppolres[pos] != 0){
		printf("%.2fx^%d  ", ppolres[pos], pos);
	}
	}
	printf("\n\n");
	printf("Este resultado foi armazenado e poderá ser visualizado até que outra operação seja realizada!\n\n\n");
	system("PAUSE");
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*/////////Função para Multiplicar Polinômios//////////////////*/
/*/////////////////////////////////////////////////////////////*/
void multPol(float *ppol1, float *ppol2, float *ppol3, float *ppolres){
	int i, j, pos, option1, option2;
	printf("Quais polinômios você deseja multiplicar\n");
	printf("1. Primeiro Polinômio.\n");
	printf("2. Segundo Polinômio.\n");
	printf("3. Terceiro Polinômio.\n");
	printf("0. Sair\n\n");
	printf("Escolha um acima:\n");
	printf("---> ");
	scanf("%d", &option1);
	if(option1 == 0){
		return;
	}
	printf("\nAgora, escolha outro acima:\n");
	printf("---> ");
	scanf("%d", &option2);

	//RESET DO POLINOMIO RESULTANTE
	for(i = 0; i <= 40; i++) ppolres[i] = 0;

	if (option1 != option2){
		if (option1 == 1 || option2 == 1){
			if (option1 == 2 || option2 == 2){
				for(i = 0; i <= 20; i++){
					for(j = 0; j <= 20; j++){
						ppolres[i+j] += ppol1[i] * ppol2[j]; 
					}
				}
			}
			if (option1 == 3 || option2 == 3){
				for(i = 0; i <= 20; i++){
					for(j = 0; j <= 20; j++){
						ppolres[i+j] += ppol1[i] * ppol3[j]; 
					}
				}
			}
		}
		else if (option1 == 3 || option2 == 3){
			for(i = 0; i <= 20; i++){
					for(j = 0; j <= 20; j++){
						ppolres[i+j] += ppol3[i] * ppol2[j]; 
					}
				}	
		}
	}
	else{
		printf("\n\nInsira dois números referentes a polinômios diferentes.\n\n");
		system("PAUSE");
	}

	printf("O resultado da multiplicação é:\n\n");
	for(pos = 40; pos > -1; pos--){
		if (ppolres[pos] != 0){
		printf("%.2fx^%d  ", ppolres[pos], pos);
	}
	}
	printf("\n\n");
	printf("Este resultado foi armazenado e poderá ser visualizado até que outra operação seja realizada!\n\n\n");
	system("PAUSE");	

}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*/////////Função para checar grau do polinômio////////////////*/
/*/////////////////////////////////////////////////////////////*/
void multconstK(float *ppol1, float *ppol2, float *ppol3, float *ppolres){
	int i, k, check;
	printf("Qual polinômio deseja multiplicar?\n");
	printf("1. Primeiro Polinômio.\n");
	printf("2. Segundo Polinômio.\n");
	printf("3. Terceiro Polinômio.\n");
	printf("0. Sair\n\n");
	printf("Escolha um acima:\n");
	printf("---> ");
	scanf("%d", &check);
	printf("Qual número real multiplicará este polinômio?\n");
	printf("---> ");
	scanf("%d", &k);

	switch (check){
		case 1:
			for(i = 0; i <= 20; i++){
				ppolres[i] = k * ppol1[i];
			}
		break;

		case 2:
			for(i = 0; i <= 20; i++){
				ppolres[i] = k * ppol3[i];
			}
		break;

		case 3:
			for(i = 0; i <= 20; i++){
				ppolres[i] = k * ppol3[i];
			}
		break;

	default:
		return;

	//FAZER MENU E PERGUNTAR SE QUER SALVAR E MOSTRAR POLINOMNIO

	}
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*/////////Função para checar grau do polinômio////////////////*/
/*/////////////////////////////////////////////////////////////*/
void degreePol(float *ppol1, float *ppol2, float *ppol3, float *ppolres){
	int i, degree = 0, check;
	printf("Deseja verificar o grau de qual polinômio?\n\n");
	printf("1. Polinômio 1\n");
	printf("2. Polinômio 2\n");
	printf("3. Polinômio 3\n");
	printf("4. Polinômio resultante da última operação\n");
	printf("---> ");
	scanf("%d", &check);

	switch (check){
		case 1:
			for(i = 0; i <= 20; i++){
				if (ppol1[i] != 0){
					degree = i;
				}
			}
		break;

		case 2:
			for(i = 0; i <= 20; i++){
				if (ppol2[i] != 0){
					degree = i;
				}
			}
		break;

		case 3:
			for(i = 0; i <= 20; i++){
				if (ppol3[i] != 0){
					degree = i;
				}
			}
		break;

		case 4:
			for(i = 0; i <= 40; i++){
				if (ppolres[i] != 0){
					degree = i;
				}
			}
		break;

		default:
		return;
	}

	printf("\n\nO grau do polinômio escolhido é: %d\n\n\n\n", degree);
	system("PAUSE");
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*//////////////////FUNÇÃO VERIF. POL VAZIO////////////////////*/
/*/////////////////////////////////////////////////////////////*/
short isEmpty(int check, float *ppol1, float *ppol2, float *ppol3){
	int i, null = 0, pos;
	switch(check){
		case 1:
			for(i = 0; i < 20; i++){
				if (ppol1[i] != 0){
					null = 1;
					break;
				}
			}	
			if (null == 1){
				printf("Esta posição já possui o seguinte polinômio:\n\n");
				for(pos = 20; pos >= 0; pos--){
					if (ppol1[pos] != 0){
						printf("%.2fx^%d  ", ppol1[pos], pos);
					}	
				}
			printf("\n\n\n");			
			system("PAUSE");				
			}
		break;

		case 2:
			for(i = 0; i < 20; i++){
				if (ppol2[i] != 0){
					null = 1;
					break;
				}
			}	
			if (null == 1){
				printf("Esta posição já possui o seguinte polinômio:\n\n");
				for(pos = 20; pos >= 0; pos--){
					if (ppol2[pos] != 0){
						printf("%.2fx^%d  ", ppol2[pos], pos);
					}	
				}
			printf("\n\n\n");			
			system("PAUSE");				
			}			
		break;

		case 3:
			for(i = 0; i < 20; i++){
				if (ppol3[i] != 0){
					null = 1;
					break;
				}
			}	
			if (null == 1){
				printf("Esta posição já possui o seguinte polinômio:\n\n");
				for(pos = 20; pos >= 0; pos--){
					if (ppol3[pos] != 0){
						printf("%.2fx^%d  ", ppol3[pos], pos);
					}	
				}
			printf("\n\n\n");			
			system("PAUSE");				
			}			
		break;
	}
	return(null);
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/

short ExistPol()

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
	printf("1. Inserir/Resetar Polinômios.\n");
	printf("2. Visualizar os Polinômios inseridos.\n");
	printf("3. Somar Polinômios.\n");
	printf("4. Multiplicar Polinômios.\n");
	printf("5. Calcular o valor do Polinômio, dado um X escolhido.\n");
	printf("6. Multiplicar um Polinômio por uma constante K.\n");
	printf("7. Derivar um Polinômio.\n");
	printf("8. Integrar um Polinômio.\n");
	printf("9. Determinar o grau de um Polinômio.\n");
	printf("0. Fechar programa e Créditos do Desenvolvedor.\n\n");
	printf("---> ");
	scanf("%d", &opmenu);
	return(opmenu);
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*///////////////////CONTINUAÇAO DO MENU///////////////////////*/
/*/////////////////////////////////////////////////////////////*/
short Continua(void) {
int ch;

  do {
		system("cls");
        printf("\n\n\n      Você deseja voltar o menu principal? [S,N] : ");
		ch = getchar();
		ch= toupper(ch);
  }
  while( (ch != 'S') && (ch != 'N') );

  if(ch == 'S') return(1);
  else return(0);
}

short ContinuaPol(void) {
int ch;

  do {
		system("cls");
        printf("\n\n\n      Você deseja inserir outro Polinômio? [S,N] : ");
		ch = getchar();
		ch= toupper(ch);
  }
  while( (ch != 'S') && (ch != 'N') );

  if(ch == 'S') return(1);
  else return(0);
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/


/*/////////////////////////////////////////////////////////////*/
/*///////////////////CRÉDITOS//////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
void Creditos(void){
	printf("\n\n\n                     Trabalho Prático de Programação 01\n");
	printf("                              Desenvolvido por:\n\n");
	printf("                      Mauricio Gabriel Torres Rodrigues\n");
	printf("                               RA: 181252694\n\n");
	printf("                Curso de Ciências da Computação - 2º Semestre\n");
	printf("                  UNESP -Faculdade de Ciências e Tecnologia\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
/*/////////////////////////////////////////////////////////////*/
/*/////////////////////////////////////////////////////////////*/
