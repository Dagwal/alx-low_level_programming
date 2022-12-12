#include "main.h"
/**
 * _puts - print string
 * @str: string to be print
 *
 * Return: nothing
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
