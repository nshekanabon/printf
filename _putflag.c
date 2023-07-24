#include "main.h"
/**
 * _putsigns - print a sign with flag
 *
 * Return lens
 */

int _putsign(int num, char spec)
{
	int lens = 0;

	if (spec == 'd' || spec == 'i')
	{
		if (num >= 0)
			lens += _putchar('+');
		lens += _putint(num);
	}
	else if (spec == 'u')
		lens += _putuint(num);

	return (lens);
}

/**
 * _putspace- prints a space
 * Return length
 */
int _putspace(int num, char spec)
{
	int length = 0;
	if (spec == 'd' || spec == 'i')
	{
		if (num >= 0)
			length += _putchar(' ');
		length += _putint(num);
	}
	else if (spec == 'u')
		length += _putuint(num);

	return (length);
}

/**
 * _puthash - prints a hash
 * Return: n
 */
int _puthash(unsigned int num, char base)
{
	int n = 0;

	if (base == 'o')
	{
		n += _putchar('0');
		n += _putoct(num);
	}
	else if (base == 'x')
	{
		n += _putstr("0x");
		n += _puthex(num, 'x');
	}
	else if (base == 'X')
	{
		n += _putstr("0X");
		n += _puthex(num, 'X');
	}

	return (n);
}
