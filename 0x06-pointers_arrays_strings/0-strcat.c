#include "main.h"

/**
 * _strcat - Concatenates the string pointed by @src,
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concated upon.
 * @src: The source string to be appended @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];



	return (dest);
}

