#include "main.h"
/**
 * _strcpy - copies string
 * @dest: char pointer
 * @src: char pointer
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i <= n; i++)
		dest[i] = '\0';

	return (dest);
}
