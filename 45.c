#include <stdio.h>

int main() {

	int a, b;

	scanf_s("%d%d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.02f", (float)a/(float)b);

	return 0;
}