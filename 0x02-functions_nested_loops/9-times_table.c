#include <stdio.h>

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (j == 0)
				printf("%d", result);
			else
				printf(",%3d", result);

			if (j < 9)
				printf(",");
		}
		printf("\n");
	}
}
