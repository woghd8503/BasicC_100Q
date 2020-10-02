#include <stdio.h>

int main() {

	int a;

	scanf_s("%d", &a);

	while (a != 0) {

		printf("%d\n", a);

		--a;
	}

	return 0;
}