#include <stdio.h>

int main() {

	int a, i, j;
	scanf_s("%X", &a);
	for (i = 1; i < 16 ; i++) {
		j = a * i;

			printf("%X X %X = %X\n", a, i, j);
	}

	return 0;
}