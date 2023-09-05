#include "stdio.h"
/**
 * _isalpha - function that checks for alphabets in the codes
 * @c: alphabetic character to be checked
 * Return: 1 if c is a letter,else return 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
