#include <stdio.h>

int main() {

	int a, b;

	scanf_s("%d%d", &a, &b);

	if (a > b) {

		printf("a�� b���� Ů�ϴ�. <1>");
	}
	else if (b > a) {

		printf("b�� a���� Ů�ϴ�. <0>");
	}

	return 0;
}