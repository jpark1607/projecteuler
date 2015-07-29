#include <stdio.h>

void main(void) {
	int a = 0, b = 0, c = 0;

	for(int i = 1; i < 1000; ++i) {
		if(i % 3 == 0)
			a += i;
	}

	for(int j = 1; j < 1000; ++j) {
		if(j % 5 == 0)
			b += j;
	}

	for(int k = 1; k < 1000; ++k) {
		if(k % 15 == 0)
			c += k;
	}

	printf("Result: %d\n", a + b - c);

}
