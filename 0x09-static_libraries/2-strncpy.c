/**
 * _strncpy - Copies a string, using at most n bytes from the source string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy from the source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

    /* Copy up to n characters from the source string to the destination string */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

    /* Pad the destination string with null bytes if necessary */
for (; i < n; i++)
dest[i] = '\0';

    /* Return a pointer to the resulting string dest */
return (dest);
}
