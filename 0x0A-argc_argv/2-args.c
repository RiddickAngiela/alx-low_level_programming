#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings containing the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;

(void)argc;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

