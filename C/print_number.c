#include <stdio.h>

/**
 * print_number - prints an integer
 *
 * @n: integer
 *
 * Return: nothing
 */
void print_number(int n)
{
	int i = n;
	if (i < 0)
	{
		putchar('-');
		i = -i;
	}

	if (i / 10 != 0)
		print_number(i / 10);
	putchar(i % 10 + '0');
}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n = 999;
	print_number(n);

	return (0);
}
