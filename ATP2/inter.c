#include <stdio.h>
#include <stdlib.h>

void Inter(int *S1, int *S2, int *SI);

int main (void){
	int i, ele;
	int S1[6], S2[6],SI[6];

	printf("Seq 1 :\n");
	for(i = 0; i < 6; i++){
		scanf("%d", &ele);
		S1[i] = ele;
	}
	printf("Seq 2 :\n");
	for(i = 0; i < 6; i++){
		scanf("%d", &ele);
		S2[i] = ele;
	}

}

void Inter(int *S1, int *S2, int *SI){
	
} 