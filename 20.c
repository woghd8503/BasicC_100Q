#include <stdio.h>

int main() {

	int a, b;

	scanf_s("%d-%d", &a, &b);
	printf("%06d%07d", a, b);

	return 0;
}
