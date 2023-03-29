#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    /* Ignore unused argc parameter */
(void)argc;

    /* Print the program name */
printf("%s\n", argv[0]);

return (0);
}
