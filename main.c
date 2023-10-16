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
	int len;

	len = _printf("What?");
	printf("\n%d\n", len);
	len = _printf("What%s", "The?");
	printf("\n%d\n", len);
	len = _printf("What%The");
	printf("\n%d\n", len);
	len = _printf("What%s", NULL);
	printf("\n%d\n", len);
	len = _printf("What%");
	printf("\n%d\n", len);

	return (0);
}
