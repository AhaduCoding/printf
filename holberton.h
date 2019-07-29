#ifndef DREAMTEAM
#define DREAMTEAM
#include<stdarg.h>
#include<stdlib.h>

/**
 * struct a - this structure is going to give us the format
 * @c: the character that is going to give us the respective function
 * @p: function pointer with va_list argument
 */
typedef struct a
{
	char c;
	int (*p)(va_list list);
} choose;

int _printf(const char *format, ...);
int _putchar(char c);
/*functions.c*/
int print_c(va_list a);
int print_s(va_list a);
int print_por(va_list a);
int print_id(va_list a);
int print_bin(va_list a);
/*functions2.c*/
int print_u(va_list a);
int print_o(va_list a);
int print_x(va_list a);
int print_X(va_list a);
#endif
