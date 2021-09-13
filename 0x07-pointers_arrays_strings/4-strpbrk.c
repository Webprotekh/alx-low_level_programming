#include "main.h"
#define NULL 0

/**
 * _strpbrk - Checkh for the first character in a string
 * @s: The string to scan
 * @accept: The string to check
 *
 * Return: The value of s
 */

char *_strpbrk(char *s, char *accept)
{
int x = 0, y;
while (s[x] != '\0')
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
s = &s[x];
return (s);
}

}
x++;
}

return (NULL);
}
