#include <stdio.h>

int main(void) {
	int y = 1901;
	int m = 1;
	int total = 2;
	int check = 0;
	// 01 / 1 / 1 -> 2 (화요일)
	while(y != 2001) {
		if(total % 7 == 0) {
			check++;
		}
		
		switch(m) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				total += 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				total += 30;
				break;
			case 2:
				if((y % 4) != 0) {
					total += 28;
				}
				else if((y % 100) == 0 && (y % 400) != 0) {
					total += 28;
				}
				else {
					total += 29;
				}
				break;
		}
		m++;
		if(m == 12) {
			y++;
			m = 1;
		}
	}
	
	printf("%d\n", check);
	return 0;
}
