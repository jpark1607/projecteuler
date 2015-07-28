#include <stdio.h>

void main(void) {
	// int num = 600851475143 = 71 * 8462696833 401
	int a = 0, b = 0, c = 0;

	for(int i = 1; i <= 100; ++i) {
		a += i;
	}
	a *= a;

	for(int j = 1; j <= 100; ++j) {
		b += j * j;
	}

	c = a - b;

	printf("%d\n", c);
}
