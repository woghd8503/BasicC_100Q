#include <stdio.h>

int main()
{
	int a[20][20], i, x, y, j, n;

	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf_s("%d %d", &x, &y);
		for(j=1; j<=19; j++)
		{
			if (a[x][j] == 0) a[x][j] = 1;
			else a[x][j] = 0;
	    }

		for (j = 1; j <= 19; j++)
		{
		if (a[j][y] == 0) a[j][y] = 1;
		else a[j][y] = 0;
		}
	}

	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j < 19; j++)
		{
		printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
