#include <stdio.h>

/**
 * Write a function that prints the 9 times table, starting with 0
 *
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

	void print_digit(int n)
	{
	_putchar(n + '0');
	}

	int main()
	{
		int i, j, result;

		for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			if (result < 10)
				_putchar(' ');
			}
			if (result < 10)
				_putchar(' ');
			else
				print_digit(result / 10);
				print_digit(result % 10);
		}
		_putchar('\n');
	}

return 0;
}
