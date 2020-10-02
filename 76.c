#include <stdio.h>

int main(){

	int repeat = 1;
	char alpha;
	scanf_s("%c", &alpha);

	alpha = alpha-5;
	
	 do{

		printf("%c\n", alpha);
		
			alpha++;
			repeat++;
	}  while(repeat < 7);


	return 0;
}