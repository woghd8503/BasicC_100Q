#include <stdio.h>

int main() {

	int a;

	again:
	scanf_s("%d", &a);

	if (a != 0) {

		printf("%d\n", a);
		goto again;
	}

	return 0;
}