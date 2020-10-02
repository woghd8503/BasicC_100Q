#include <stdio.h>

int main(){

	int a;

	scanf_s("%d", &a);

	a = a - 1;
	
	do {

	
	printf("%d\n", a);
	--a;

	} while (a != 0);

		

	return 0;
}