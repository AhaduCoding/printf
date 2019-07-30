#include "holberton.h"
#include <stdio.h>
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
		str = "(null)";
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
/**
 * print_r - print inverse string
 * @a: num to analyze
 * @s: array
 * @index: place in the array
 * Return: number of "characters" of element called
 */
int print_r(va_list a, char *s, int *index)
{
	int i = 0, j;
	char *str, *p, c1, c2;

	str = va_arg(a, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
		i++;
	p = malloc(i + 1);
	if (!p)
		return (-1);
	for (j = 0; j < i; j++)
	{
		c1 = str[j];
		c2 = str[(i - 1) - j];
		p[j] = c2;
		p[(i - 1) - j] = c1;
		buffer(s, p[j], index);
	}
	free(p);
	return (i);
}
