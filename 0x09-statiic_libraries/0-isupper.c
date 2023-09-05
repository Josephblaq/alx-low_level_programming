#include <stdio.h>
#include "main.h"

/**
* _isupper - checks uppercase letters in if statement
* @c: character to be checked
* Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'g')
		return (1);
	else
		return (0);
}
