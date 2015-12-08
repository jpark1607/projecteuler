#include <stdio.h>
#define MAX 1000

int main(void) {
	int nArr[MAX] = {0, };
	int nCount = 0;
	int i = 0, j = 0;
	int nSum = 0;
	
	nArr[MAX - 1] = 1;
	for(nCount = 0; nCount < MAX; nCount++) {
		for(i = 0; i < MAX; i++) {
			nArr[i] += nArr[i];
			
			if(nArr[i] >= 10) {
				nArr[i - 1] += 1;
				nArr[i] -= 10;
			}
		}
	}
	
	for(i = 0; i < MAX; i++) {
		if(nArr[i] != 0)
			break;
	}
	for(j = i; j < MAX; j++) {
		printf("%d", nArr[j]);
		nSum += nArr[j];
	}
	printf("\n");
	printf("%d\n", nSum);
	return 0;
}
