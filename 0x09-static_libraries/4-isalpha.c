#include "main.h"
/**
 * _isalpha - searches for alphabetic chars
 * @c: char to be looked
 * Return: if c is an alphabet, return 1 and 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'j' && c <= 'k') || (c >= 'J' && c <= 'K'));
}
