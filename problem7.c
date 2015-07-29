#include <stdio.h>

void main(void) {
	int i = 1;
	int a = 1;
	int check = 0;
	int count = 0;

	while(count != 10001) {
		check = 0;
		++a;
		for(i = 1; i <= a; ++i) {
			if(a % i == 0)
				++check;
		}
		if(check == 2)
			++count;
	}

	printf("%d\n", a);
}
