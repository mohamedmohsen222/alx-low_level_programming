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
				printf(",  %d", result);

			if (result < 10 && j < 9)
				printf(",   ");  /* Add extra spaces for single-digit numbers*/
			else if (j < 9)
				printf(",  ");   /* Adjust spacing for double-digit numbers*/
		}
		printf("\n");
	}
}
