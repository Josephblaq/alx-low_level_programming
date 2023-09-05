#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns a string length
 *@s: string
 *Return: length of string
 */
int _strlen(char *s)
{
	int longl = 0;

	while (*s != '\0')
	{
		longl++;
		s++;
	}
	return (longl);
}
