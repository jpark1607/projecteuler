#include <stdio.h>
#define MAX	20
int main(void) {
	
	long long int nArr[MAX][MAX] = {0, };
	int i = 0, j = 0;
	for(i = 0; i < MAX; i++) {
		nArr[i][0] = 1;
		nArr[0][i] = 1;
	}
	
	for(i = 1; i < MAX; i++) {
		for(j = 1; j < MAX; j++) {
			nArr[i][j] = nArr[i - 1][j] + nArr[i][j - 1];
		}
	}
	
	printf("%lld\n", nArr[MAX - 1][MAX - 1]);
	return 0;
}
