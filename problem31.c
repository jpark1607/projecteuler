#include <stdio.h>

int main(void) {
	
	int a, b, c, d, e, f, g, h;
	int nTotal = 0;
	int nCheck = 0;
	
	for(a = 0; a <= 200; a++) {
		for(b = 0; b <= 100; b++) {
			for(c = 0; c <= 40; c++) {
				for(d = 0; d <= 20; d++) {
					for(e = 0; e <= 10; e++) {
						for(f = 0; f <= 4; f++) {
							for(g = 0; g <= 2; g++) {
								for(h = 0; h <= 1; h++) {
									nTotal = a + (2 * b) + (5 * c) + (10 * d) + (20 * e) + (50 * f) + (100 * g) + (200 * h);
									if(nTotal == 200) {
										nCheck++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	printf("%d\n", nCheck);
	return 0;
}
