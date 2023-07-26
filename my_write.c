#include "main.h"

/**
 * my_write - checker
 *
 * @c: char to write
 * Return: 1
 */

int my_write(char c)
{
	return (write(1, &c, 1));
}

/**
 * my_write2 - checker
 *
 * @c: char to write
 * Return: 1
 */

int my_write2(const char *c, int count)
{
	return (write(1, c, count));
}
