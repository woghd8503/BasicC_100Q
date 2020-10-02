#include <stdio.h>

int main() {
	int in;
	scanf_s("%d", &in);

	for (int i = 1; i <= in; i++) {

		if (i%3==0) {
			continue;
		}
		else {

			printf("%d ", i);
		}
	}

	return 0;
}