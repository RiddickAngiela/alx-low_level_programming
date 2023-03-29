#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: Pointer to destination memory area.
 * @src: Pointer to source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p_dest = dest;
char *p_src = src;
unsigned int i;

for (i = 0; i < n; i++)
{
*p_dest++ = *p_src++;
}

return (dest);
}
