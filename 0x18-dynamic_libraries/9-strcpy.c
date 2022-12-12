#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string to be coppied
 * @src: char type string that dest will paste on
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
