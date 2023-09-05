#include <stdio.h>
#include "main.h"
/**
 * _isdigit - searches for digit
 * @c: int to be to be returned
 * Return: 1 if c is a digit, esle return 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
