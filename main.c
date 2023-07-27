
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

    len = _printf("%d", -1024);
    printf("\n...\n");
    len2 = printf("%d", -1024);
    printf("\n...\n");
    _printf("len: %d",len);
    printf("\n");
    printf("len2: %d",len2);
    printf("\n...\n");
    return (0);
}
