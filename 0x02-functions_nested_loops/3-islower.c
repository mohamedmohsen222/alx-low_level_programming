#include "main.h"
#include "ctype.h"

/**
 * _islower - checks if the character is lower case or not.
 * @c: char to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(char c)
{
if( islower(c) > 0)
	return (1);
return (0);
}
