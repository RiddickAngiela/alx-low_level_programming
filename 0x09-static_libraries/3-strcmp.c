/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A negative integer if s1 is less than s2,
 *         zero if s1 is equal to s2,
 *         or a positive integer if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i;

    /* Compare the characters of s1 and s2 until a difference is found */
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return s1[i] - s2[i];
}

    /* If the characters are the same up to the end of the shorter string,
     * return the difference in length between s1 and s2 */
return (s1[i] - s2[i]);
}
