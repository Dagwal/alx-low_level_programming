#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;
	
	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j]);
		j++:
		k++;
	}
	arg[k] = '\n';
	k++;
	i++;
}
arg[k] = '\0';
return (arg);
}
