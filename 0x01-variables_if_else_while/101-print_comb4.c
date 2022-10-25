#include <stdio.h>

/**
 **  main - Prints all possible combinations of three different digits,
 **        in ascending order, separated by a comma followed by a space.
 **
 ** Return: Always 0.
 **/
int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++) /*hundreds place*/
	{
		for (one = (ten + 1); one <= '9'; one++) /*ones*/
		{
			putchar(hundred);
			putchar(ten);
			putchar(one);

			if (hundred != '7' || ten != '8' || one != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
