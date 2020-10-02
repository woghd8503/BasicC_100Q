#include <stdio.h>
#include <string.h>


int main() {

	char w[51]="";
	scanf_s("%s", &w,sizeof(w)); // in this case with scanf ("%5", &w)

	printf("%s", w);

	return 0;
}
