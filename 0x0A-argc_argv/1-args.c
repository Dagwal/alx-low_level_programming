#include <stdio.h>
/**
 * main - writes a program that print no of arg passed 
 * @args: argument count is here
 * @argv: argument vector is here
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
