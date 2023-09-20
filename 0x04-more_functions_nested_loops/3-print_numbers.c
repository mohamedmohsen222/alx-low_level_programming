#include "main.h"
#include <stdio.h>
/**
 * print_numbers- prints numer for 1-0;
 * Return: all number 1 to 9;
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
