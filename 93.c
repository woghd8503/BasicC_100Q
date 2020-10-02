#include <stdio.h>

	int i, j, k, a [24];

	int main() 
	{
	scanf_s("%d", &k);

	for (i = 0; i <k; i++) 
	{
		scanf_s("%d", &j);
		a[j]++;
	}
	for (i = 1; i <= 23; i++) 
	{
	printf("%d", a[i]);
	}
	return 0;
}