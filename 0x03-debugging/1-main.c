#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
/* there is no i++ so i never gets more than 0*/
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
