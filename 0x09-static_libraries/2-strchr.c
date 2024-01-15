#include "main.h"
/**
 * _strchr - entry point
 * @s: enter value
 * @c: enter value
 * Return: Always return 0 on Success
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
