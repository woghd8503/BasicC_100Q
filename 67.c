#include <stdio.h>

int main() {

	long long int a;
	scanf_s("%lld", &a);

	if (a >= 0) {
		if (a % 2 == 0) {
			printf("plus\n even");
		}
		else {
			printf("plus\n odd");
		}
	}
	else {
		if (a % 2 == 0) {
				printf("minus\n even");
			}
			else {
				printf("minus\n odd");
			}

		}
		return 0;
	}
