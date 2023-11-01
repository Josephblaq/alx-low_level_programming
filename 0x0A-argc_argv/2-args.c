#include <stdio.h>
#include "main.h"

/**
 * main- Entry point
 * @argc: counts the number of arguments
 * @argv: holds in the passed arguments(array)
 *
 * Return: Always return 0(success)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
