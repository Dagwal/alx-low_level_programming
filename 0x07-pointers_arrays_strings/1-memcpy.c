#include "main.h"

/**
 * _memcpy - iron out
 * @dest: pointer to char
 * @src: pointer to char
 * @n: size of pointers
 * Return: *dest ing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
