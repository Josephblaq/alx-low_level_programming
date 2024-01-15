#include "main.h"
/**
 * _puts - prints string to the standard output
 * @str: string to be printed to the output
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
