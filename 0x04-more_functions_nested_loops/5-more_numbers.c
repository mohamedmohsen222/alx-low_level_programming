#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 1 to 14 10 times;
 */
void more_numbers(void)
{
	int i = 0;

	int x = 0;

	for (i = 1; i <= 10; i++)
	{
	for (x = 0; x <= 14; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
	}
}
