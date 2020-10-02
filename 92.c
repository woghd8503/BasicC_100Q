#include <stdio.h>

int main() {
	int a, b, c, d;

	scanf_s("%d%d%d%d", &a, &b, &c, &d);

	for (int i = 1; i < d; i++) {
		a = a * b + c;
	}

	printf("%d", a);

}