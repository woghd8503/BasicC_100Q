#include <stdio.h>

int main() {

	long float a;

	scanf_s("%lf", &a);
	
	printf("%.11lf", a);

	return 0;
}