#include "holberton.h"
/**
 * impresion_o - print the octal number
 * @a: array to be analized
 * @b: size of array
 * Return: number of "characters" of element called
 */

int impresion_o(int *a, int b)
{
	int c = 0, y = 0;
	int sum = 0, i, j;
	int octal[11] = {0};

	while (c < b)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			if (i == 0 && c < b)
			{
				sum = sum + a[c];
				c++;
			}
			else if (i != 0 && c < b)
			{
				sum = sum + (2 * i * a[c]);
				c++;
			}
			else
				break;
		}
		octal[y] = sum;
		y++;
	}
	for (j = y - 1; j >= 0; j--)
		_putchar(octal[j] + '0');
	return (y);
}
/**
 * print_u - print unsigned decimal
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_u(va_list a)
{
	
	int x;
	unsigned int u;
	unsigned int j, cont = 1;
	unsigned int var1, num, var2, var3 = 1;
	int  y = 0;
	
	x = (va_arg(a, int));

	u = x;
	var2 = u;
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
 * print_o - print octal number in base 8
 * @a: element of va_list type
 * Return: number of "characters" of element called
 */
int print_o(va_list a)
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
		x = -(x + 1);/*Add 1 to obtain two's complement*/
	for (c = 0; x > 0; c++)/*Divide the number by 2 and store in the array*/
	{
		arr[c] = x % 2;
		x = x / 2;
	}
	if (aux >= 0)
	{
		y = impresion_o(arr, c);
	}
	else
	{
		for (d = 31; d >= 0; d--)/*Finds the one's complement for the number*/
		{
			if (arr[d] == 1)
				arr[d] = 0;
			else if (arr[d] == 0)
				arr[d] = 1;
		}
		y = impresion_o(arr, 32);
	}
	return (y);
}
