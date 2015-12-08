#include <stdio.h>

int main(void) {
	int nArr[2] = {60085147, 5143};
	int nCur[2] = {0, };
	int nSoArr[100] = {0, };
	int nCheck = 0;
	int i = 0, j = 0, k = 0;
	
	for(i = 2; i < 800000; i++) {
		nCur[0] = nArr[0];
		nCur[1] = nArr[1];
		
		nCur[1] += (nCur[0] % i) * 10000;
		
		if(nCur[1] % i == 0) {
			nCheck++;
			nSoArr[j++] = i;
			nArr[1] += (nArr[0] % i) * 10000;
			nArr[0] /= i;
			nArr[1] /= i;
		}
	}
	
	printf("%d\n", nSoArr[j - 1]);
	return 0;
}
