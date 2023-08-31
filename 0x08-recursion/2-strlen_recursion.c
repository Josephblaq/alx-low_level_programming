#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s: the string that checks the length
 *
 * Return: 0 on success
 */

int _strlen_recursion(char *s)
{
if	(*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
