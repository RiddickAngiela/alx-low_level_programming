#include "main.h"
/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the string to search.
 * @c: The character to search for.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}

return (NULL);
}
