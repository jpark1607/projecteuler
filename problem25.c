#include <stdio.h>
#define LEN 	1000 
#define MAX 	10000
 
int main(void) {
	int Num1[LEN] = {0, }; 
	int Num2[LEN] = {0, };
	int Num3[LEN] = {0, };
	int count = 0, i = 0, j = 0;
	
	Num2[LEN - 1] = 1;
	Num3[LEN - 1] = 1;
	
	for(count = 2; Num3[0] == 0; count++) {
		
		/** (n + 2) 번째 피보나치 계산 **/
		for(i = LEN - 1; i >= 0; i--) {
			Num3[i] += Num1[i];
			if(Num3[i] >= 10) {
				Num3[i - 1] += 1;
				Num3[i] -= 10;
			}
		}
		
		/** (n + 1) 번째 피보나치수 n 번째로 옮기기 **/
		for(i = LEN - 1; i >= 0; i--) {
			Num1[i] = Num2[i];
		}
	
		/** (n + 2) 번째 피보나치수 (n + 1) 번째로 옮기기 **/
		for(i = LEN - 1; i >= 0; i--) {
			Num2[i] = Num3[i];
		}
	}
	
	printf("%d\n", count - 1);
	return 0;
}
