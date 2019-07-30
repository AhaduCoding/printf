#include "holberton.h"
/**
 * print_R - printRot13
 * @a: num to analyze
 * @s: array
 * @index: place in the array
 * Return: number of "characters" of element called
 */
int print_R(va_list a, char *s, int *index)
{
	int i = 0, j, c;
	char *str = va_arg(a, char *);
	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(ahyy)";
	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == arr[j])
			{
				buffer(s, rot[j], index);
				c++;
				break;
			}
		}
		if (!arr[j])
		{
			buffer(s, str[i], index);
			c++;
		}
		i++;
	}
	return (c);
}
