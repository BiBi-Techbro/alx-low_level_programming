#include <stdio.h>

/**
 * Write a function that prints all natural numbers from n to 98, followed by a new line
 *
 */

int _putchar(char c) 
{
	return write(1, &c, 1);
}

	void print_number(int n) {
	if (n < 0) 
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10) {
		print_number(n / 10);
	}
		_putchar((n % 10) + '0');
	}

	void print_to_98(int n) 
		{
			int i;

			if (n <= 98) 
			{
				for (i = n; i <= 98; i++) {
				print_number(i);

				if (i != 98) 
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		} 
		else 
		{
			for (i = n; i >= 98; i--) {
			print_number(i);

			if (i != 98) 
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

_putchar('\n');
}
