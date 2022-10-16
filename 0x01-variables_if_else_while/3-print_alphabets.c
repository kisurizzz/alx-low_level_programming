#include <stdio.h>
/**
 * main - prints lowercase and uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char upper = 'A';
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
