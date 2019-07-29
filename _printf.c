#include "holberton.h"
/**
 * getfunction - gets the function choose
 * @c: char to find
 * Return: return a function
 */
int (*getfunction(char c))(va_list a)
{
	int c1;
	choose l[] = {
		{'c', print_c}, {'s', print_s}, {'%', print_por}, {'i', print_id},
		{'d', print_id}, {'b', print_bin}, {'u', print_u}, {'o', print_o},
		{'x', print_x}, {'X', print_X}, {'\0', NULL}
	};
	for (c1 = 0; l[c1].c != '\0'; c1++)
	{
		if (c == l[c1].c)
		{
			return (l[c1].p);
		}
	}
	return (NULL);
}
/**
 * _printf - prints depends of the arguments.
 * @format: s for string, c for char, d for decimals, i for integers,
 * b for cast to binary, u for cast to unsigned decimal, o for print
 * in octal, x for lowercase Hexadecimal, X for Uppercase Hexadecimal,
 * p to print adresses
 * Return: new string.
 */
int _printf(const char *format, ...)
{
	int c1 = 0, x = -1, (*f)(va_list), prueba = 0;
	va_list elements;

	va_start(elements, format);
	if (format)
	{
		x = 0;
		while (format[c1] != '\0')
		{
			prueba = 0;
			if (format[c1] == '%' && format[c1 + 1] == '\0')
			{
				return (-1);
			}
			else if (format[c1] == '%' && format[c1 + 1] != '\0')
			{
				f = getfunction(format[c1 + 1]);
				if (f)
				{
					x = x + f(elements);
					c1 = c1 + 2;
				}
				else
					prueba = 1;
			}
			if (prueba == 1 || format[c1] != '%')
			{
				_putchar(format[c1]);
				c1++;
				x++;
			}
		}
	}
	va_end(elements);
	return (x);
}
