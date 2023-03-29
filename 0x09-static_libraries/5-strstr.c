#include "main.h"
/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n == *h && *n != '\0' && *h != '\0')
{
n++;
h++;
}

if (*n == '\0')
{
return haystack;
}

haystack++;
}

return NULL;
}
