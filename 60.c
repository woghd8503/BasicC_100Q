#include <stdio.h>

int main() {

	long long int a, b;
	scanf_s("%lld %lld", &a, &b);
	printf("%d", a&b);

	return 0;
}