#include "holberton.h"
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
	int c1 = 0, c2, x = 0;
	choose list[] = {
		{'c', print_c}, {'s', print_s}, {'%', print_por}, {'i', print_id},
		{'d', print_id}, {'b', print_bin}, {'u', print_u}, {'o', print_o},
		{'x', print_x}, {'X', print_X}, {'\0', NULL}
	};
	va_list elements;

	va_start(elements, format);
	while (format && format[c1])
	{
		if (format[c1] == '%')
		{
			if (format[c1 + 1] == '\0')
			{
				return (-1);
			}
			else
			{
				for (c2 = 0; list[c2].c != '\0'; c2++)
				{
					if (format[c1 + 1] == list[c2].c)
					{
						x = x + list[c2].p(elements);
						c1 += 2;
						break;
					}
				}
			}
		}
		else
		{
			_putchar(format[c1]);
			x++;
			c1++;
		}
	}
	va_end(elements);
	return (x);
}
