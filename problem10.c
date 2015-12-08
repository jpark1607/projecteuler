#include <stdio.h>

int main(void) {
	int i = 0, j = 0;
	int nCheck = 0;
	int nCur = 0;
	int nSum[2] = {0, };
	
	for(i = 2; i <= 2000000; i++) {
		if(i % 2 == 0) {
			continue;
		}
		else if(i % 3 == 0) {
			continue;
		}
		else if(i % 5 == 0) {
			continue;
		}
		else if(i % 7 == 0) {
			continue;
		}
		
		nCheck = 0;
		for(j = 1; j <= i; j++) {
			if(i % j == 0) {
				nCheck++;
			}
		}
		if(nCheck == 2) {
			nCur++;
			nSum[1] += i;
			if(nSum[1] > 10000000) {
				nSum[1] -= 10000000;
				nSum[0] += 1;
			}
		}
		printf("%d\n", i);
	}
	
	printf("\t\t\t%d\n", nCur);
	return 0;
}
