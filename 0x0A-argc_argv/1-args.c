#include <stdio.h>
#include "main.h"

/**
 * main- Entry point
 * @argc: counts the number of argeuments passed
 * @argv: array of the passed arguments
 *
 * Return: Always return 0(Success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

