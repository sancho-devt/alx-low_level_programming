#include "main.h"
/**
 * string_toupper - convert lowercase to uppercase
 * @n: string to be converted
 * Description: This converts a string to uppercase
 * Return: character pointer
 */
char *string_toupper(char *n)
{ 
    int i;
    char *m = n;

    for (i = 0; n[i] != '\0'; i++)
    {
        if (n[i] >= 97 && n[i] <= 122)
        {
            m[i] = n[i] - 32;
        }
    }
    return (m);
}
