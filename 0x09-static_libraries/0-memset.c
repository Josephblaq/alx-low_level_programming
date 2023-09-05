#include <stdio.h>
#include "main.h"

/**
 * _memset - program sets specific value in memory block
 * @s: beginning of the address to be filled
 * @b: the expected value
 * @n: variable representing the number pf bytes to be modified.
 *
 * Return: update array with a new value for bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[n] = b;
		n--;
	}
	return (s);
}
