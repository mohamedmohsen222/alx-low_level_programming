#include "main.h"
#include "ctype.h"

/**
 * _iseven - checks for alphabetic character.
 */
int _isalpha(int c)
{
	if(islower(c) > 0) {
		return 1;
	}
	return 0;
}
