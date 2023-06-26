#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get nthe length of
 * Return: the lenth of @str.
 */
size_t strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
