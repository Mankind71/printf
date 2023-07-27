#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;
	long int l = INT_MIN;

	len = _printf("%i", l);
	len2 = printf("%i", l);
    printf("\n...\n");
    _printf("len: %d",len);
    printf("len2: %d",len2);
    printf("\n...\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
