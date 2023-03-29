/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source buffer.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

    /* Copy the string character by character */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

    /* Copy the null terminator */
dest[i] = '\0';

    /* Return the pointer to the destination buffer */
return dest;
}
