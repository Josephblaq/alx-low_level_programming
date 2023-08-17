#include "main.h"

/**
 * print_alphabet - print all alphabets in lowercase,followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char blaq;

	for (blaq = 'a'; blaq <= 'z'; blaq++)
	{
		_putchar(blaq);
	}
	_putchar('\n');
}
