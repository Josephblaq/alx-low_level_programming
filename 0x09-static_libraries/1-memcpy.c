#include "main.h"
/**
 * _memcpy - copies a memory area
 * @dest: destination of the copied memory
 * @src: source where memory is copied from
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[k];
		n--;
	}
	return (dest);
}
