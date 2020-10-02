#include <stdio.h>

int a, b;

int main (){

	scanf_s("%d%d", &a, & b);


	if (a != b){
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}