#include <stdio.h>

int main(void) {
	
	int nCur = 0, nPro = 0;
	
	nCur = 2;
	nPro = 1;
	
	while(1) {
		if((nCur - 1) % 3 == 0) {
			nCur = (nCur - 1) / 3;
		}
		else {
			nCur *= 2;
		}
	
		nPro += 1;
		printf("%d: %d\n", nPro, nCur);
	
		if(nCur > 1000000) {
			break;
		}
	}
	return 0;
}
