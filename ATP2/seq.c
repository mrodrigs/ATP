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
	for(i = 0; i <= tam-1; i++){
		scanf("%d", &ele);
		A[i] = ele;
	}

	printf("A sequencia crescente maxima tem tamanho: %d\n\n", SeqCrescenteMax(A, tam));
}

int SeqCrescenteMax(const int *A, int N){
	int i, seqatual = 1, seqmax = 0;

	for(i = 0; i <= N-1; i++){
		if (A[i] < A[i + 1]){
			seqatual++;
		}
		else{
			seqatual = 1;
		}
		if (seqatual > seqmax){
			seqmax = seqatual;
		}
	}
	return(seqmax);
}

/*
		if (A[i] < A[i + 1]){
			referencial = A[i];
			seqteste = 1;
		}
		if (referencial < A[i]){
			seqteste++;
		}
		if (seqteste > seq){
			seq = seqteste;
		}
*/