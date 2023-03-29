/**
 * _strncat - Concatenates two strings, using at most n bytes from the source string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from the source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;

    /* Find the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

    /* Append the source string to the destination string, using at most n bytes */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

    /* Add the terminating null byte */
dest[dest_len + i] = '\0';

    /* Return a pointer to the resulting string dest */
return (dest);
}
