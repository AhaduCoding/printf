#include "holberton.h"
/**
 * print_u - print unsigned decimal
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_u(va_list a)
{
	int x;

	x = (va_arg(a, int));
	return (x);
}
/**
 * print_o - print octal number in base 8
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_o(va_list a)
{
	int x;

	x = va_arg(a, int);
	return (x);
}
/**
 * print_x - print hexadecimal number base 16
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_x(va_list a)
{
	int x;

	x = va_arg(a, int);
	return (x);
}
/**
 * print_X - print hexadecimal number with uppercase base 16
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_X(va_list a)
{
	int x;

	x = va_arg(a, int);
	return (x);
}
