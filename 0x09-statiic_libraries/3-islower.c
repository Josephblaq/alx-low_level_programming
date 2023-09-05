#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase letters
 * @c: the letter to be checked
 * Return: 1 if c is a lowercase character. else return 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
