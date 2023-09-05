#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: string to be printed to stdout
 * _putchar: prints a new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
