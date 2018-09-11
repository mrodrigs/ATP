#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int SeqCrescenteMax(const int *A, int N);

int main(void){
	int i, tam, ele;
	int A[MAX] = {0};

	printf("Tamanho da Sequencia?\n");
	scanf("%d", &tam);
	printf("Os elementos sao:\n\n");
	for(i = 0; i <= tam; i++){
		scanf("%d", &ele);
		A[i] = ele;
	}

	printf("A sequencia crescente maxima tem tamanho: %d\n\n", SeqCrescenteMax(A, tam));
}

int SeqCrescenteMax(const int *A, int N){
	int i, seq = 1, referencial;
	for(i = 0; i <= N; i++){
		if (A[i] < A[i + 1]){
			referencial = A[i];
			seq = 1;
		}
		if (referencial < A[i]){
			seq++;
		}
	}
	return(seq);
}
