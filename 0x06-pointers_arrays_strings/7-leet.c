#include "main.h"
/**
 * leet - encodes a string value
 * @ch: input character pointer
 * 
 * Description: This program encodes a string value.
 * Return: encoded pointer
 */

char *leet(char *ch)
{
    char encode[] = "a4A4e3E3o0O0t7T7l1L1";
    int i;
    int j;

    for (i = 0; ch[i] != '\0'; i++)
    {
        for (j = 0; encode[j] != '\0'; j++)
        {
            if (ch[i] == encode[j])
            {
                ch[i] = encode[j + 1];
                break;
            }
        }
    }
    return (ch);
}
