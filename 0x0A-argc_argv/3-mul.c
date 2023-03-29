#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: the number of arguments passed into the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 if there are not enough arguments.
 */
int main(int argc, char *argv[])
{
int i;
int j;
int product;

if (argc != 3)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);
j = atoi(argv[2]);

product = i * j;

printf("%d\n", product);
return (0);
}

