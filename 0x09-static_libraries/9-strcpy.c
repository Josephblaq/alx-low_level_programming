#include "main.h"
/**
 * char *_strcpy - copies strings pointed to by src
 * @dest: where strings would be copied to
 * @src: where strings would be copied from
 *
 * Return: return string value
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (; k < j ; k++)
	{
		dest[k] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
