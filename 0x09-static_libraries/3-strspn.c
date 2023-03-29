#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring consisting of bytes from accept in the string s.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of characters to accept.
 *
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;

while (*s != '\0' && !found)
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
count++;
found = 1;
break;
}
a++;
}
s++;
}

return (count);
}
