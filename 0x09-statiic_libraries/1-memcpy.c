#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function which copies the area of memory
 * @dest: space where datas are stored
 * @src: space where they are copied
 * @n: bytes number
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
