#include<stdio.h>

void main (void) {

	int a1 = 1;
	int a2 = 2;
	int a3 = 0;
	int sum = 0;


	while (true) {
		
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
		if (a2 > 4000000)
			break;

		if (a2 % 2 == 0) {
			sum += a2;
		}
		
	}
	
	printf("%d\n", sum + 2);

}
