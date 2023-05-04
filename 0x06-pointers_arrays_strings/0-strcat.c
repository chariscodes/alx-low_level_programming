#include "main.h"
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the resulting string (dest).
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest, and then
 * adds a terminating null byte. It returns a pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	/* Find the end of the destination string */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append the source string to the destination string */
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the terminating null byte */
	dest[i] = '\0';
	/* Return a pointer to the resulting string */
	return (dest);
}
