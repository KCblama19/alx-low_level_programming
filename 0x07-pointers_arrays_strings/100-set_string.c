#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to char.
 * @to: Pointer to char to set the value to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
