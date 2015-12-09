#include <stdio.h>

int main(void) {
	int nData = 1002001;
	int nSum = 0;
	int i = 0, j = 0;
	
	for(i = 1000; i > 0; i -= 2) {
		for(j = 0; j < 4; j++) {
			nSum += nData;
			nData -= i;
		}
	}
	printf("%d\n", nSum + 1);
		
	return 0;
}
