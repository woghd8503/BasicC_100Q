#include <stdio.h>

int main() {
	int k;

	scanf_s("%d", &k);
	for (int j = 1; j <= k; j++)
	{
		if (j%3==0 || j%5==0) {
	printf("X\n");
		}
		else {
			printf("%d\n", j);
		}
			
	}
	return 0;
}

//if (j == 3 || j == 6 || j == 9) {
//	printf("X\n");