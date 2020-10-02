#include <stdio.h>
int a, b, c, d[1000];

int main() 
{
	scanf_s("%d", &a);
	for (b = 0; b < a; b++) 
	{
		scanf_s("%d", &d[b]);
	}
	for (b = a-1; b>=0; b--) 
	{
		printf("%d", d[b]);
	}
}