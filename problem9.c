#include <stdio.h>

void main(void) {
	int a = 0, b = 0, c = 0;
	int a2 = 0, b2 = 0, c2 = 0;


	for(a = 1; a <= 998; ++a) {
		a2 = a * a;
		for(b = 1; b <= 998; ++b) {
			b2 = b * b;
			for(c = 1; c <= 998; ++c) {
				c2 = c * c;
				if (a < b && b < c){
					if (1000 == a + b + c) {
						if (c2 == a2 + b2) {
							printf("a = %d, b = %d, c = %d\n\n", a, b, c);
							printf("Result = %d\n\n", a * b * c);
						}
					}
				}
			}
		}
	}
}
