#include <stdio.h>


int main()
{
	int a;
replay:
	scanf_s("%d", &a);


	if (a != 0) {
		printf("%d\n", a);
		goto replay;
	}

	return 0;
}