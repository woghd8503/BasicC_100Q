#include <stdio.h>

int main() {

	int a, b, c, result;

	scanf_s("%d%d%d", &a, &b, &c);

	result = a + b + c;
	printf("%d\n", result);
	printf("%.01f",(float)result / 3);

	return 0;
}