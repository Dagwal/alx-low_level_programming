#include "main.h"
/**
* _strncat - concatenates two string
* @dest: first string to be concatenet
* @src: second string  to be concatenet
* @n: number of bytes from src
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, dest_len = 0;
while (dest[i++])
dest_len++;
for (i = 0; src[i] && i < n; i++)
dest[dest_len++] = src[i];
return (dest);
}
