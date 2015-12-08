#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nArr[100][52] = {0, };
	int nRes[1][52] = {0, };
	int i = 0, j = 0;
	
	FILE *fp = NULL;
	FILE *fp2 = NULL;
	
	fp = fopen("proj_euler13.txt", "rt");
	fp2 = fopen("proj_euler13res.txt", "wt");
	
	for(i = 0; i < 100; i++) {
		for(j = 2; j < 52; j++) {
			fscanf(fp, "%d", &nArr[i][j]);
		}
	}
	
	for(i = 0; i < 100; i++) {
		for(j = 51; j >= 0; j--) {
			nRes[0][j] += nArr[i][j];
			if(nRes[0][j] >= 10) {
				nRes[0][j - 1] += 1;
				nRes[0][j] -= 10;
			}
		}
	}
	
	for(j = 0; j < 52; j++) {
		fprintf(fp2, "%d", nRes[0][j]);
	}
	printf("\n");
	return 0;
}
