#include "main.h"
/**
* print_c - print chars
* @ap: va_list that holds arguments from main func
* Return: number of chars
*/
int print_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
* print_s - print strings
* @ap: va_list that holds arguments from main func
* Return: number of chars
*/
int print_s(va_list ap)
{
	char *str;

	str = va_arg(ap, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	return (_putstr(str));
}


/**
* print_percent - prints percent
* @ap: va_list that holds arguments from main func
* Return: %
*/
int print_percent(__attribute__((unused)) va_list ap)
{
	return (_putchar('%'));
}


