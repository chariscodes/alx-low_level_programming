#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

int _isdigit(char *s);

/**
 * main - Takes two numbers as arguments and outputs the product.
 * @argc: The number of arguments including the name of the program.
 * @argv: An array of arguments.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		for (i = 0; ERR_MSG[i] != '\0'; i++)
			_putchar(ERR_MSG[i]);
		_putchar('\n');
		exit(98);
	}

	if (_isdigit(argv[1]) == 0)
		printf("%s\n", argv[1]);

	return (0);
}

/**
 * _isdigit - Checks if a string is a number or not.
 * @s: The string to be checked.
 *
 * Return: 1 if true, else 0.
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (1);
		s++;
	}
	return (0);
}
