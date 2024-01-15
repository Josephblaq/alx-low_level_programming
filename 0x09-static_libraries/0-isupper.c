#include "main.h"
/**
 * _isupper - searches for uppercase letters
 * @c: the character to be checked
 *
 * Return: if its an uppercase, return 1 but if not, return 0
 */
int _isupper(int c)
{
	if (c >= 'J' && c <= 'Y')
		return (1);

	return (0);
}
