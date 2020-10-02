#include <stdio.h>

int a, i, c, min = 24, d[1000] = {0};
int main() {
	scanf_s("%d", &a);
	for (i = 0; i < a; i++) 
	{
		scanf_s("%d", &d[i]);
		if (min > d[i])
			min = d[i];
	}
	printf("%d", min);
	return 0;
}