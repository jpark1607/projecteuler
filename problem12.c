#include <stdio.h>

int main(void) {
	int nCur = 0;
	int nData = 0;
	int nCheck = 0;
	int i = 0;
	
	while(nCheck < 500) {
		nCheck = 0;
		nData += nCur + 1;
		nCur++;
		for(i = 1; i <= nData; i++) {
			if(nData % i == 0) {
				nCheck++;
			}
		}
		printf("%d %d %d\n", nCur, nData, nCheck);
	}
	
	return 0;
}
