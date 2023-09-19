#include "main.h"

/**
 * main - tests the largest_number() function
 * Return: Always 0
 */
int main(void)
{
    int a, b, c, largest;

    a = 98;
    b = 402;
    c = -198;
    largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);

    return (0);
}

