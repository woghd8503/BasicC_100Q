#include <stdio.h>

int main() {

	int a, b, sum = 0;

	scanf_s("%d", &a);

	for (b = 1; b <= a; b++) {
		if (b % 2 == 0) {
			sum += b;
	}	
		
	}
	printf("%d", b);

	return 0;
}