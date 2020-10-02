#include <stdio.h>

int main() {

	int a, b;

	scanf_s("%d%d", &a, &b);

	if (a > b) {

		printf("a가 b보다 큽니다. <1>");
	}
	else if (b > a) {

		printf("b가 a보다 큽니다. <0>");
	}

	return 0;
}