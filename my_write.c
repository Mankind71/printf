#include "main.h"

/**
 * my_write - checker
 *
 * @c: char to write
 * Return: 1
 */

int my_write(char const *c)
{
	return (write(1, c, 1));
}
