#include <stdio.h>

int main() {
	char a;
	
	do {
		scanf_s("%c", &a);

		printf("%c\n", a);

	} while (a != 'q');

	return 0;
	}
