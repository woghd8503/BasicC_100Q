#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);

	if (b >= a) {
		printf("1");
	}
	else printf("0");


	return 0;
}