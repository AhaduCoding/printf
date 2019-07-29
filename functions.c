#include "holberton.h"
/**
 * print_c - print characters
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_c(va_list a)
{
	char x;

	x = (va_arg(a, int));
	_putchar(x);
	return (1);
}
/**
 * print_s - print strings
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_s(va_list a)
{
	char *x;
	int y = 0;
	int c = 0;

	x = va_arg(a, char *);
	while (x[c])
	{
		_putchar(x[c]);
		c++;
		y++;
	}
	return (y);
}
/**
 * print_por - print character %
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_por(va_list a)
{
	(void)a;
	_putchar('%');
	return (1);
}
/**
 * print_id - print numbers in base 10 (integers)
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_id(va_list a)
{
	unsigned int j, cont = 1;
	unsigned int var1, num, var2, var3 = 1;
	int x, y = 0;

	x = va_arg(a, int);
	var2 = x;

	if (x < 0)
	{
		_putchar('-');
		var2 = x * (-1);
	}
	num = var2;
	while (num > 9)
	{
		num = num / 10;
		cont++;
		var3 = var3 * 10;
	}
	for (j = 1; j <= cont; j++)
	{
		var1 = var2 / var3;
		var2 = var2 % var3;
		var3 = var3 / 10;
		y++;
		_putchar ('0' + var1);
	}
	return (y);
}
/**
 * print_bin - print numbers in base 2 (binary)
 * @a: element of va_list type
 * Return: number of "characters" of element printed
 */
int print_bin(va_list a)
{
	int x, c, d, y = 0, aux = 0;
	int arr[32] = {0};

	aux = va_arg(a, int);
	x = aux;/* The original decimal number*/
	if (aux == 0)
	{
		_putchar('0');
		return (1);
	}
	if (aux < 0)
	{
		x = -(x + 1);/*Add 1 to obtain two's complement*/
	}
	for (c = 0; x > 0; c++)/*Divide the number by 2 and store in the array*/
	{
		arr[c] = x % 2;
		x = x / 2;
	}
	if (aux >= 0)
	{
		for (d = c - 1; d >= 0; d--)/*Prints since the last to the 1st pos*/
		{
			_putchar('0' + arr[d]);
			y++;
		}
	}
	else
	{
		for (d = 31; d >= 0; d--)/*Finds the one's complement for the number*/
		{
			if (arr[d] == 1)
				arr[d] = 0;
			else if (arr[d] == 0)
				arr[d] = 1;
			_putchar('0' + arr[d]);
			y++;
		}
	}
	return (y);
}
