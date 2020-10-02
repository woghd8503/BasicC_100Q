#include <stdio.h>

int main() {
	int a, d, n;
	scanf_s("%d%d%d", &a, &d, &n);
	printf("%d", a + (n - 1) * d);
	return 0;
}