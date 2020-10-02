#include <stdio.h>

int main() {

	int a, b, c, result;

	scanf_s("%d%d%d", &a, &b, &c);

	result = (a > b ? a : b) > c ? (a > b ? a : b) : c;
   
	printf("%d", result);

	return 0;
}