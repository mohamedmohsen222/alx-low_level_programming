#include "main.h"
#include "ctype.h"

/**
 * _islower - checks if the character is lower case or not.
 */
int _islower(int c)
{
	if(islower(c) > 0) {
		return 1;
	}
	return 0;
}
