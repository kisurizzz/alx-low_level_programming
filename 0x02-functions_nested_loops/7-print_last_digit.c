#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int ls = n % 10;

	if (ls < 0)
		ls <= -1;

	_putchar(ls + '0');

	return (n % 10);
}
