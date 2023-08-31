#include <stdio.h>
/**
 * main - check for end of string
 * print a new line
 * print the current character and advance the pointer
 * recursively call the function with the next character
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}
	putchar(*s++);
	_puts_recursion(s);
}
