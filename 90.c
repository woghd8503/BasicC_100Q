#include <stdio.h>

int main() {

	long long int  a, r, n;
	scanf_s("%lld%lld%lld", &a, &r, &n);
	int tmp = r;
	for (int i = 1; i < n-1; i++) 
	{
		r *= tmp;

	}
	printf("%lld", a*r);

	return 0;
}