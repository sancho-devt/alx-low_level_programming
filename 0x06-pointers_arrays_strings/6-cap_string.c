#include "main.h"
/**
 * cap_string - capatalize the first letter of word 
 * @ch: character pointer
 * Return: character pointer
 */
char *cap_string(char *ch)
{
    int i;
    int c;

    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 9 || ch[i] == 10 || ch[i] == 32 || ch[i] == 33 || ch[i] == 34 || ch[i] == 40 || ch[i] == 41 || ch[i] == 44 || ch[i] == 46 || ch[i] == 59 || ch[i] == 63 || ch[i] == 123 || ch[i] == 125)
        {
            c = 1;
            continue;
        }

        if (c == 1)
        {
            if (ch[i] >= 90)
                ch[i] = ch[i] - 32;
            c = 0;
        }
        else
        {
            ch[i] = ch[i];
        }
        
    }

    return (ch);
}
