#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 1 to 14 ten times.
 */
void more_numbers(void)
{
    int i, x;

    for (i = 0; i < 10; i++)
    {
        for (x = 0; x <= 14; x++)
        {
            putchar((x < 10) ? (x + '0') : ((x / 10) + '0'));
            putchar((x < 10) ? '\0' : (x % 10 + '0'));
        }
        putchar('\n');
    }
}
