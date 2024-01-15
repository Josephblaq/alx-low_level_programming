#include "main.h"
/**
 * _memset - fills a block of memory with a special value
 * @s: address of memory to be filled
 * @b: the expected value
 * @n: number of changed bytes
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
