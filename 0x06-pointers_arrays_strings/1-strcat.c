#include "main.h"
/**
 * _strcat - string concatenates
 * @dest: The character to print
 * @src: number of array elements
 * Return: On success 1
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
