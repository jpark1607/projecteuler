#include <stdio.h>

void main(void) {
	// int num = 600851475143 = 71 * 8462696833 401
	int mul = 0;
	int a, b, c, d, e, f;
	int comp1 = 1, comp2 = 2;


	for(int i = 100; i <= 999; ++i) {
		for(int j = 100; j <= 999; ++j) {
			mul = i * j;
			if (mul >= 100000) {
					a = mul % 10;
					b = (mul / 10) % 10;
					c = (mul / 100) % 10;
					d = (mul / 1000) % 10;
					e = (mul / 10000) % 10;
					f = mul / 100000;

					if (a == f && b == e && c == d) {
						comp2 = mul;
						printf("%d\n", mul);
					}
					
					if (comp2 > comp1)
						comp1 = comp2;
			}
			else {
				a = mul % 10;
				b = (mul / 10) % 10;
				c = (mul / 100) % 10;
				d = (mul / 1000) % 10;
				e = mul / 10000;

				if (a == e && b == d) {
					comp2 = mul;
					printf("%d\n", mul);
				}
				
				if (comp2 > comp1)
					comp1 = comp2;
			}
		}
	}

	printf("\n\n%d\n", comp1);
}
