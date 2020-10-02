#include <stdio.h>

int main() {
	int in, add = 0;
	scanf_s("%d", &in);

	for (int i = 1; i <= in; i++) {
	
		add = add+ i;
		if (add >= in) {
			break;
		}
	}
		printf("%d", add);
    return 0;
	}

	
