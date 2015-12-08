#include <stdio.h>
#define MAX 300
int main(void) {
	int nData = 0;
	int nArr[MAX] = {0, };
	int i = 0, j = 0;
	int nSum = 0;
	nArr[MAX - 1] = 1;
	
	for(nData = 1; nData <= 7; nData++) {
		for(i = 0; i < MAX; i++) {
			nArr[i] = nArr[i] * nData;
			if(nArr[i] >= 100) {
				nArr[i - 2] += nArr[i] / 100;
				if(nArr[i - 2] >= 10) {
					nArr[i - 3] += 1;
					nArr[i - 2] -= 10;
				}
				nArr[i] = nArr[i] - (nArr[i] / 100) * 100;
			}
			if(nArr[i] >= 10) {
				nArr[i - 1] += nArr[i] / 10;
				if(nArr[i - 1] >= 10) {
					nArr[i - 2] += 1;
					nArr[i - 1] -= 10;
				}
				if(nArr[i - 2] >= 10) {
					nArr[i - 3] += 1;
					nArr[i - 2] -= 10;
				}
				nArr[i] = nArr[i] - (nArr[i] / 10) * 10;
			}
		}
	}
	
	for(i = 0; i < MAX; i++) {
		if(nArr[i] != 0)
			break;
	}
	
	for(j = i; j < MAX; j++) {
		printf("%d ", nArr[j]);
		nSum += nArr[j];
	}
	printf("\n%d\n", nSum);
	return 0;
}
