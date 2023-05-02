#include "main.h"

/**
 * _puts: rints a string
 * @str: string to be printed out
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}

	_putchar('\n');
}
