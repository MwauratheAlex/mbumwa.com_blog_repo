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
	print_number(555);
	putchar('\n');
	print_number(786);
	putchar('\n');
	print_number(952);
	putchar('\n');
	print_number(-87);
	putchar('\n');

	return (0);
}
