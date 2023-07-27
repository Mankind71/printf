#include <stdio.h>
#include "main.h"

/**
 * count_int - counts num of digit in a number
 *
 * @x: num to count
 * Return: the count
 */
int count_int(int x)
{
	int i;

	if (x < 0)
		x *= -1;
	while (x % 10)
	{
		x = x / 10;
		i++;
		printf("i:%d\n", i);
		printf("x:%d\n", x);
	}
	return (i);
}

/**
 * print_digits - prints digit recursively
 *
 * @x: digit to print
 */
void print_digits(int x)
{
	if (x < 0)
	{
		my_write('-');
		d_specifier(x * -1);
	}
	else if (x != 0)
	{
		int i = x % 10;

		d_specifier(x / 10);
		my_write('0' + i);
	}
}

/**
 * d_specifier - prints variable of type int to sdout
 *
 * @x: variable  to print
 * Return: number of words written
 */

int d_specifier(int x)
{
	print_digits(x);
	return (count_int(x));
}
