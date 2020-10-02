#include <stdio.h>

int main() {
	int i, a;
	int sum = 0;

	scanf_s("%d", &a);

	for (i = 1; ; i++) {

		sum += i;
		if (sum >= a) break;
	}
	printf("%d", i);

	return 0;
}