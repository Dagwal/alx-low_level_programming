#include "main.h"
#include <string.h>
/**
* _strncpy -> for copying purpose
* @dest: paramFirst
* @src: param2
* @n: paramThird
* Return: string of func
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
