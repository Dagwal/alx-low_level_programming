#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string to be check
 *
 * Return: nothing
 */
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
