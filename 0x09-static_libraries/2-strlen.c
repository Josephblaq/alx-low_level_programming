#include "main.h"
/**
 * _strlen - function that calculates the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longs = 0;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	return (longs);
}
